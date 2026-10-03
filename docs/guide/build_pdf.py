#!/usr/bin/env python3
"""Build docs/guide/RT-950-CPS.pdf from RT-950-CPS.md."""

import html
import re
import sys
from pathlib import Path

from reportlab.lib import colors
from reportlab.lib.enums import TA_JUSTIFY
from reportlab.lib.pagesizes import letter
from reportlab.lib.styles import ParagraphStyle
from reportlab.lib.units import inch
from reportlab.platypus import (
    BaseDocTemplate,
    CondPageBreak,
    Frame,
    Image,
    KeepTogether,
    ListFlowable,
    ListItem,
    NextPageTemplate,
    PageBreak,
    PageTemplate,
    Paragraph,
    Preformatted,
    Spacer,
    Table,
    TableStyle,
)
from reportlab.platypus.tableofcontents import TableOfContents

HERE = Path(__file__).resolve().parent
SOURCE = HERE / "RT-950-CPS.md"
OUTPUT = HERE / "RT-950-CPS.pdf"

NAVY = colors.HexColor("#1e3a5f")
SLATE = colors.HexColor("#334155")
RULE = colors.HexColor("#cbd5e1")
CODE_BG = colors.HexColor("#f4f6f8")
ROW = colors.HexColor("#f8fafc")


def escape(text: str) -> str:
    return html.escape(text, quote=False)


def markup(text: str) -> str:
    parts = re.split(r"(`[^`]+`)", text)
    out = []
    for part in parts:
        if part.startswith("`") and part.endswith("`") and len(part) >= 2:
            inner = escape(part[1:-1])
            out.append(f'<font face="Courier" size="9">{inner}</font>')
        else:
            bolded = re.sub(
                r"\*\*([^*]+)\*\*",
                lambda match: f"<b>{escape(match.group(1))}</b>",
                part,
            )
            # Pieces outside ** are still raw. Escape them without double-escaping tags.
            chunks = re.split(r"(<b>.*?</b>)", bolded)
            for chunk in chunks:
                if chunk.startswith("<b>"):
                    out.append(chunk)
                else:
                    out.append(escape(chunk))
    return "".join(out)


def parse(text: str):
    lines = text.splitlines()
    blocks = []
    index = 0
    while index < len(lines):
        line = lines[index]
        if line.startswith("```"):
            body = []
            index += 1
            while index < len(lines) and not lines[index].startswith("```"):
                body.append(lines[index])
                index += 1
            blocks.append(("code", "\n".join(body)))
        elif line.startswith("!["):
            match = re.match(r"!\[([^\]]*)\]\(([^)]+)\)", line.strip())
            if not match:
                raise SystemExit(f"bad image line: {line}")
            blocks.append(("image", match.group(1), match.group(2)))
        elif line.startswith("|"):
            rows = []
            while index < len(lines) and lines[index].startswith("|"):
                raw = lines[index].strip().strip("|")
                cells = [cell.strip() for cell in raw.split("|")]
                if not all(re.fullmatch(r":?-{3,}:?", cell) for cell in cells):
                    rows.append(cells)
                index += 1
            blocks.append(("table", rows))
            continue
        elif line.startswith("### "):
            blocks.append(("section", line[4:].strip()))
        elif line.startswith("## "):
            blocks.append(("chapter", line[3:].strip()))
        elif line.startswith("# "):
            blocks.append(("title", line[2:].strip()))
        elif line.startswith("- "):
            items = []
            while index < len(lines) and lines[index].startswith("- "):
                items.append(lines[index][2:].strip())
                index += 1
            blocks.append(("list", items))
            continue
        elif re.match(r"\d+\. ", line):
            items = []
            while index < len(lines) and re.match(r"\d+\. ", lines[index]):
                items.append(re.sub(r"^\d+\. ", "", lines[index]).strip())
                index += 1
            blocks.append(("ol", items))
            continue
        elif line.strip():
            parts = [line.strip()]
            index += 1
            while index < len(lines) and lines[index].strip() and not lines[index].startswith(
                ("#", "- ", "|", "!", "```")
            ):
                parts.append(lines[index].strip())
                index += 1
            blocks.append(("p", " ".join(parts)))
            continue
        index += 1
    return blocks


class Guide(BaseDocTemplate):
    def __init__(self, path):
        super().__init__(
            str(path),
            pagesize=letter,
            title="RT-950 CPS",
            author="webaugur",
            subject="Guide to the RT-950 Pro programming window and its serial protocol",
        )
        frame = Frame(
            0.85 * inch,
            0.7 * inch,
            letter[0] - 1.7 * inch,
            letter[1] - 1.45 * inch,
            id="body",
            showBoundary=0,
        )
        self.addPageTemplates(
            [
                PageTemplate(id="front", frames=[frame], onPage=self.draw_front),
                PageTemplate(id="body", frames=[frame], onPage=self.draw_body),
            ]
        )
        self.anchor_n = 0

    anchor_seed = 0

    def draw_front(self, canvas, doc):
        canvas.saveState()
        canvas.setFillColor(NAVY)
        canvas.rect(0, letter[1] - 0.28 * inch, letter[0], 0.28 * inch, fill=1, stroke=0)
        canvas.setFillColor(colors.white)
        canvas.setFont("Times-Bold", 9)
        canvas.drawString(0.85 * inch, letter[1] - 0.18 * inch, "RT-950 CPS")
        canvas.restoreState()

    def draw_body(self, canvas, doc):
        canvas.saveState()
        canvas.setFillColor(NAVY)
        canvas.rect(0, letter[1] - 0.38 * inch, letter[0], 0.38 * inch, fill=1, stroke=0)
        canvas.setFillColor(colors.white)
        canvas.setFont("Times-Bold", 9)
        canvas.drawString(0.85 * inch, letter[1] - 0.24 * inch, "RT-950 CPS")
        canvas.setFont("Times-Roman", 9)
        canvas.drawRightString(letter[0] - 0.85 * inch, letter[1] - 0.24 * inch, "Guide")
        canvas.setFillColor(SLATE)
        canvas.setFont("Times-Roman", 9)
        canvas.drawRightString(letter[0] - 0.85 * inch, 0.42 * inch, str(doc.page))
        canvas.setStrokeColor(RULE)
        canvas.line(0.85 * inch, 0.58 * inch, letter[0] - 0.85 * inch, 0.58 * inch)
        canvas.restoreState()

    def afterFlowable(self, flowable):
        if not isinstance(flowable, Paragraph):
            return
        key = getattr(flowable, "_toc_key", None)
        if key is None:
            return
        text = flowable._toc_text
        level = flowable._toc_level
        self.canv.bookmarkPage(key)
        self.canv.addOutlineEntry(text, key, level=level, closed=False)
        linked = f'<link href="#{key}" color="#1e3a5f">{escape(text)}</link>'
        self.notify("TOCEntry", (level, linked, self.page))


def styles():
    body = ParagraphStyle(
        "Body",
        fontName="Times-Roman",
        fontSize=11,
        leading=15,
        textColor=colors.HexColor("#1f2933"),
        alignment=TA_JUSTIFY,
        spaceAfter=8,
    )
    return {
        "title": ParagraphStyle(
            "DocTitle",
            fontName="Times-Bold",
            fontSize=26,
            leading=30,
            textColor=NAVY,
            spaceAfter=10,
        ),
        "deck": ParagraphStyle(
            "Deck",
            parent=body,
            fontSize=12,
            leading=17,
            textColor=SLATE,
            spaceAfter=8,
        ),
        "contents": ParagraphStyle(
            "ContentsHead",
            fontName="Times-Bold",
            fontSize=18,
            leading=22,
            textColor=NAVY,
            spaceAfter=12,
        ),
        "chapter": ParagraphStyle(
            "Chapter",
            fontName="Times-Bold",
            fontSize=16,
            leading=20,
            textColor=NAVY,
            spaceBefore=14,
            spaceAfter=8,
        ),
        "section": ParagraphStyle(
            "Section",
            fontName="Times-Bold",
            fontSize=13,
            leading=16,
            textColor=colors.HexColor("#243b53"),
            spaceBefore=10,
            spaceAfter=4,
        ),
        "body": body,
        "bullet": ParagraphStyle(
            "BulletBody",
            parent=body,
            alignment=0,
            spaceAfter=2,
        ),
        "caption": ParagraphStyle(
            "Caption",
            fontName="Times-Italic",
            fontSize=9,
            leading=12,
            textColor=SLATE,
            spaceBefore=3,
            spaceAfter=10,
        ),
        "code": ParagraphStyle(
            "Code",
            fontName="Courier",
            fontSize=8.5,
            leading=11,
            textColor=colors.HexColor("#111827"),
        ),
        "cell": ParagraphStyle(
            "Cell",
            fontName="Times-Roman",
            fontSize=9,
            leading=12,
            textColor=colors.HexColor("#1f2933"),
        ),
        "headcell": ParagraphStyle(
            "HeadCell",
            fontName="Times-Bold",
            fontSize=9,
            leading=12,
            textColor=colors.white,
        ),
    }


def make_toc():
    toc = TableOfContents()
    toc.dotsMinLevel = 0
    toc.levelStyles = [
        ParagraphStyle(
            name="TOCChapter",
            fontName="Times-Bold",
            fontSize=11,
            leading=16,
            leftIndent=0,
            firstLineIndent=0,
            textColor=NAVY,
            spaceBefore=4,
        ),
        ParagraphStyle(
            name="TOCSection",
            fontName="Times-Roman",
            fontSize=10,
            leading=14,
            leftIndent=16,
            firstLineIndent=0,
            textColor=SLATE,
        ),
    ]
    return toc


def flowables(blocks, look):
    story = []
    title_done = False
    intro = []
    rest = []
    seen_chapter = False
    for block in blocks:
        if not seen_chapter and block[0] != "chapter":
            intro.append(block)
        else:
            seen_chapter = True
            rest.append(block)

    for kind, *payload in intro:
        if kind == "title":
            story.append(Spacer(1, 1.1 * inch))
            story.append(Paragraph(markup(payload[0]), look["title"]))
            story.append(
                Paragraph("Programming guide for the Radtel RT-950 Pro", look["deck"])
            )
            story.append(Spacer(1, 6))
            title_done = True
        elif kind == "p":
            story.append(Paragraph(markup(payload[0]), look["deck"]))
    if not title_done:
        raise SystemExit("guide has no title")
    story.append(NextPageTemplate("body"))
    story.append(PageBreak())
    story.append(Paragraph("Contents", look["contents"]))
    story.append(make_toc())
    story.append(PageBreak())

    pending_head = []
    for kind, *payload in rest:
        if kind in ("chapter", "section"):
            style = look["chapter"] if kind == "chapter" else look["section"]
            text = payload[0]
            key = f"dest{Guide.anchor_seed}"
            Guide.anchor_seed += 1
            paragraph = Paragraph(f'<a name="{key}"/>{markup(text)}', style)
            paragraph._toc_key = key
            paragraph._toc_level = 0 if kind == "chapter" else 1
            paragraph._toc_text = text
            pending_head.append(paragraph)
            continue
        chunk = []
        if pending_head:
            chunk.extend(pending_head)
            pending_head = []
        if kind == "p":
            chunk.append(Paragraph(markup(payload[0]), look["body"]))
        elif kind == "list":
            items = [
                ListItem(Paragraph(markup(item), look["bullet"]), leftIndent=12, value="bullet")
                for item in payload[0]
            ]
            chunk.append(ListFlowable(items, bulletType="bullet", start="•", leftIndent=16))
            chunk.append(Spacer(1, 6))
        elif kind == "ol":
            items = [
                ListItem(Paragraph(markup(item), look["bullet"]), leftIndent=16)
                for item in payload[0]
            ]
            chunk.append(
                ListFlowable(
                    items,
                    bulletType="1",
                    start="1",
                    leftIndent=18,
                    bulletFontName="Times-Roman",
                    bulletFontSize=11,
                )
            )
            chunk.append(Spacer(1, 6))
        elif kind == "code":
            chunk.append(
                Preformatted(payload[0], look["code"], maxLineLength=88)
            )
            chunk.append(Spacer(1, 8))
        elif kind == "image":
            caption, rel = payload
            path = HERE / rel
            if not path.is_file():
                raise SystemExit(f"missing figure {path}")
            image = Image(str(path))
            max_w = 6.3 * inch
            max_h = 4.5 * inch
            scale = min(max_w / image.imageWidth, max_h / image.imageHeight, 1)
            image.drawWidth = image.imageWidth * scale
            image.drawHeight = image.imageHeight * scale
            image.hAlign = "CENTER"
            chunk.append(Spacer(1, 4))
            chunk.append(image)
            chunk.append(Paragraph(markup(caption), look["caption"]))
        elif kind == "table":
            rows = payload[0]
            usable = 6.8 * inch
            widths = [usable * 0.28, usable * 0.72] if len(rows[0]) == 2 else None
            if widths is None and len(rows[0]) == 1:
                widths = [usable]
            painted = []
            for row_index, row in enumerate(rows):
                style = look["headcell"] if row_index == 0 else look["cell"]
                painted.append([Paragraph(markup(cell), style) for cell in row])
            table = Table(painted, colWidths=widths, hAlign="LEFT", repeatRows=1)
            table.setStyle(
                TableStyle(
                    [
                        ("BACKGROUND", (0, 0), (-1, 0), NAVY),
                        ("TEXTCOLOR", (0, 0), (-1, 0), colors.white),
                        ("BACKGROUND", (0, 1), (-1, -1), colors.white),
                        ("ROWBACKGROUNDS", (0, 1), (-1, -1), [colors.white, ROW]),
                        ("GRID", (0, 0), (-1, -1), 0.3, RULE),
                        ("VALIGN", (0, 0), (-1, -1), "TOP"),
                        ("LEFTPADDING", (0, 0), (-1, -1), 5),
                        ("RIGHTPADDING", (0, 0), (-1, -1), 5),
                        ("TOPPADDING", (0, 0), (-1, -1), 4),
                        ("BOTTOMPADDING", (0, 0), (-1, -1), 4),
                    ]
                )
            )
            chunk.append(Spacer(1, 4))
            chunk.append(table)
            chunk.append(Spacer(1, 8))
        else:
            raise SystemExit(f"unknown block {kind}")
        if len(chunk) > 1 and kind in ("p", "image", "table"):
            story.append(KeepTogether(chunk))
        else:
            story.extend(chunk)
        if kind == "chapter":
            story.append(CondPageBreak(1.2 * inch))
    if pending_head:
        story.extend(pending_head)
    return story


def main():
    look = styles()
    blocks = parse(SOURCE.read_text())
    doc = Guide(OUTPUT)
    doc.multiBuild(flowables(blocks, look))
    print(OUTPUT)


if __name__ == "__main__":
    sys.exit(main() or 0)
