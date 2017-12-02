﻿#ifndef _Aspose_Pdf_Table_Cell_h_
#define _Aspose_Pdf_Table_Cell_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <xml/xml_text_writer.h>
#include <xml/xml_reader.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/enum_helpers.h>
#include <system/collections/list.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class HeaderFooter; } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Row; } }
namespace Aspose { namespace Pdf { class Table; } }
namespace Aspose { namespace Pdf { enum class BorderCornerType; } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { class BorderInfo; } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { class Paragraphs; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { enum class VerticalAlignment; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents a cell of the table's row.
/// </summary>
class ASPOSE_PDF_SHARED_API Cell FINAL : public System::Object
{
    typedef Cell ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::HeaderFooter;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Row;
    friend class Aspose::Pdf::Table;
    
public:

    /// <summary>
    /// Gets or sets the cell have border.
    /// </summary>
    bool get_IsNoBorder();
    /// <summary>
    /// Gets or sets the cell have border.
    /// </summary>
    void set_IsNoBorder(bool value);
    /// <summary>
    /// Gets or sets the padding.
    /// </summary>
    System::SharedPtr<MarginInfo> get_Margin();
    /// <summary>
    /// Gets or sets the padding.
    /// </summary>
    void set_Margin(System::SharedPtr<MarginInfo> value);
    /// <summary>
    /// Gets or sets the border.
    /// </summary>
    System::SharedPtr<BorderInfo> get_Border();
    /// <summary>
    /// Gets or sets the border.
    /// </summary>
    void set_Border(System::SharedPtr<BorderInfo> value);
    /// <summary>
    /// Gets or sets the background color.
    /// </summary>
    System::SharedPtr<Color> get_BackgroundColor();
    /// <summary>
    /// Gets or sets the background color.
    /// </summary>
    void set_BackgroundColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets or sets the background image file.
    /// </summary>
    System::String get_BackgroundImageFile();
    /// <summary>
    /// Gets or sets the background image file.
    /// </summary>
    void set_BackgroundImageFile(System::String value);
    /// <summary>
    /// Gets or sets the alignment.
    /// </summary>
    HorizontalAlignment get_Alignment();
    /// <summary>
    /// Gets or sets the alignment.
    /// </summary>
    void set_Alignment(HorizontalAlignment value);
    /// <summary>
    /// Gets or sets the default cell text state.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextState> get_DefaultCellTextState();
    /// <summary>
    /// Gets or sets the default cell text state.
    /// </summary>
    void set_DefaultCellTextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    /// <summary>
    /// Gets or sets the cell's formatted text.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Paragraphs> get_Paragraphs();
    /// <summary>
    /// Gets or sets the cell's formatted text.
    /// </summary>
    void set_Paragraphs(System::SharedPtr<Aspose::Pdf::Paragraphs> value);
    /// <summary>
    /// Gets or sets the cell's text word wrapped.
    /// </summary>
    bool get_IsWordWrapped();
    /// <summary>
    /// Gets or sets the cell's text word wrapped.
    /// </summary>
    void set_IsWordWrapped(bool value);
    /// <summary>
    /// Gets or sets the vertical alignment.
    /// </summary>
    Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    /// <summary>
    /// Gets or sets the vertical alignment.
    /// </summary>
    void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    /// <summary>
    /// Gets or sets the column span.
    /// </summary>
    int32_t get_ColSpan();
    /// <summary>
    /// Gets or sets the column span.
    /// </summary>
    void set_ColSpan(int32_t value);
    /// <summary>
    /// Gets or sets the row span.
    /// </summary>
    int32_t get_RowSpan();
    /// <summary>
    /// Gets or sets the row span.
    /// </summary>
    void set_RowSpan(int32_t value);
    
    /// <summary>
    /// Initializes a new instance of the Cell class.
    /// </summary>
    /// <param name="rect">The rectangle of the cell in page's coordinates.</param>
    Cell(System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Initializes a new instance of the Cell class.
    /// </summary>
    Cell();
    
    /// <summary>
    /// Clone the cell.
    /// </summary>
    /// <returns>The cloned object</returns>
    System::SharedPtr<Cell> Clone();
    
protected:

    /// <summary>
    /// Gets processed paragraphs for (row.IsRowBroken property).
    /// </summary>
    int32_t get_ProcessedParagraphsCount();
    /// <summary>
    /// Gets or sets is nothing write for this property.
    /// </summary>
    bool get_IsNothingWrite();
    /// <summary>
    /// Gets or sets is nothing write for this property.
    /// </summary>
    void set_IsNothingWrite(bool value);
    /// <summary>
    /// Gets cell rect.
    /// </summary>
    System::SharedPtr<Rectangle> get_Rect();
    /// <summary>
    /// Gets cell rect.
    /// </summary>
    void set_Rect(System::SharedPtr<Rectangle> value);
    /// <summary>
    /// Gets or sets the column width(processed internally).
    /// </summary>
    double get_Width();
    /// <summary>
    /// Gets or sets the column width(processed internally).
    /// </summary>
    void set_Width(double value);
    /// <summary>
    /// Gets or sets the column height(processed internally).
    /// </summary>
    double get_Height();
    /// <summary>
    /// Gets or sets the column height(processed internally).
    /// </summary>
    void set_Height(double value);
    /// <summary>
    /// Gets or sets the row span processed(processed internally).
    /// </summary>
    bool get_IsRowSpanProcessed();
    /// <summary>
    /// Gets or sets the row span processed(processed internally).
    /// </summary>
    void set_IsRowSpanProcessed(bool value);
    
    /// <summary>
    /// Gets cell height.
    /// </summary>
    bool CalculateHeight(System::SharedPtr<Table> table, double width, System::SharedPtr<Page> page, double bottomY, bool isScaleParagraphs);
    /// <summary>
    /// Apply cell text paragraphs
    /// </summary>
    /// <param name="textState">The text state.</param>
    void ApplyCellTextParagraphs(System::SharedPtr<Aspose::Pdf::Text::TextState> textState);
    /// <summary>
    /// Adds graphic element into the page's content.
    /// </summary>
    /// <param name="table">The table</param>
    /// <param name="page">The page</param>
    /// <param name="roundedBorderRadius">The radius for rounded borders</param>
    /// <param name="pureHeight">The pure cell height without borders</param>
    /// <param name="isCellBroken">Is cell is child of broken row</param>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> GetOperators(System::SharedPtr<Table> table, System::SharedPtr<Page> page, double roundedBorderRadius, double pureHeight, bool isCellBroken);
    /// <summary>
    /// Clone the fragment.
    /// </summary>
    /// <param name="fragment">The text fragment.</param>
    /// <returns>The cloned object</returns>
    static System::SharedPtr<Aspose::Pdf::Text::TextFragment> CloneFragment(System::SharedPtr<Aspose::Pdf::Text::TextFragment> fragment);
    /// <summary>
    /// Get table from paragraphs.
    /// </summary>
    System::SharedPtr<Table> GetTableFromParagraphs();
    void CalculateRoundedBorders(int32_t rowIndex, int32_t rowCount, int32_t cellIndex, int32_t cellCount);
    void CalculateRect(double curX, double curY, System::SharedPtr<Row> row, System::SharedPtr<Table> table, int32_t i, int32_t cellCount, double pureHeight, System::SharedPtr<BorderInfo> rowBorder);
    void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    HorizontalAlignment alignment;
    System::SharedPtr<Color> backgroundColor;
    System::String backgroundImageFile;
    System::SharedPtr<BorderInfo> border;
    int32_t colsSpan;
    System::SharedPtr<Aspose::Pdf::Text::TextState> defaultCellTextState;
    double width;
    double height;
    System::SharedPtr<MarginInfo> marginInfo;
    bool isHeightExceedSize;
    bool isPrevHeightExceedSize;
    bool isNothingWrite;
    bool isNoBorder;
    bool isRowSpanProcessed;
    bool isWordWrapped;
    bool isHorizontalAlignmentSet;
    System::SharedPtr<Aspose::Pdf::Paragraphs> paragraphs;
    int32_t processedParagraphsCount;
    System::SharedPtr<Rectangle> rect;
    BorderCornerType cornerType;
    int32_t rowSpan;
    Aspose::Pdf::VerticalAlignment verticalAlignment;
    
    void ProcessBorder(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> list, System::SharedPtr<Table> table);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Table_Cell_h_

