﻿#ifndef _Aspose_Pdf_Table_Table_h_
#define _Aspose_Pdf_Table_Table_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !(NET4CP || NET35CP) 


// C# preprocessor directive: #endif 


#include <system/string.h>
#include <system/enum_helpers.h>
#include <system/collections/list.h>
#include <system/array.h>
#include <cstdint>

#include "Generator/BaseParagraph.h"

namespace Aspose { namespace Pdf { namespace Drawing { class Graph; } } }
namespace Aspose { namespace Pdf { namespace Drawing { class Rectangle; } } }
namespace Aspose { namespace Pdf { class FloatingBox; } }
namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Cell; } }
namespace Aspose { namespace Pdf { class Row; } }
namespace Aspose { namespace Pdf { enum class BorderCornerStyle; } }
namespace Aspose { namespace Pdf { enum class TableBroken; } }
namespace Aspose { namespace Pdf { enum class ColumnAdjustment; } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { class BorderInfo; } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { class Rows; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { class GraphInfo; } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { enum class BorderCornerType; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents a table that can be added to the page.
/// </summary>
class ASPOSE_PDF_SHARED_API Table FINAL : public Aspose::Pdf::BaseParagraph
{
    typedef Table ThisType;
    typedef Aspose::Pdf::BaseParagraph BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Drawing::Graph;
    friend class Aspose::Pdf::Drawing::Rectangle;
    friend class Aspose::Pdf::FloatingBox;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::Cell;
    friend class Aspose::Pdf::Row;
    
public:

    /// <summary>
    /// Gets or sets table background color
    /// </summary>
    System::SharedPtr<Color> get_BackgroundColor();
    /// <summary>
    /// Gets or sets table background color
    /// </summary>
    void set_BackgroundColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets the styles of the border corners
    /// </summary>
    BorderCornerStyle get_CornerStyle();
    /// <summary>
    /// Gets the styles of the border corners
    /// </summary>
    void set_CornerStyle(BorderCornerStyle value);
    /// <summary>
    /// Gets the style for repeating rows
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextState> get_RepeatingRowsStyle();
    /// <summary>
    /// Gets the style for repeating rows
    /// </summary>
    void set_RepeatingRowsStyle(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    /// <summary>
    /// Gets the first rows count repeated for several pages
    /// </summary>
    int32_t get_RepeatingRowsCount();
    /// <summary>
    /// Gets the first rows count repeated for several pages
    /// </summary>
    void set_RepeatingRowsCount(int32_t value);
    /// <summary>
    /// Gets the column widths of the table.
    /// </summary>
    System::String get_ColumnWidths();
    /// <summary>
    /// Gets the column widths of the table.
    /// </summary>
    void set_ColumnWidths(System::String value);
    /// <summary>
    /// Gets or sets table vertial broken;
    /// </summary>
    TableBroken get_Broken();
    /// <summary>
    /// Gets or sets table vertial broken;
    /// </summary>
    void set_Broken(TableBroken value);
    /// <summary>
    /// Gets default cell border;
    /// </summary>
    System::SharedPtr<BorderInfo> get_DefaultCellBorder();
    /// <summary>
    /// Gets default cell border;
    /// </summary>
    void set_DefaultCellBorder(System::SharedPtr<BorderInfo> value);
    /// <summary>
    /// Gets default cell border;
    /// </summary>
    System::String get_DefaultColumnWidth();
    /// <summary>
    /// Gets default cell border;
    /// </summary>
    void set_DefaultColumnWidth(System::String value);
    /// <summary>
    /// Gets the rows of the table.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Rows> get_Rows();
    /// <summary>
    /// Gets or sets the border.
    /// </summary>
    System::SharedPtr<BorderInfo> get_Border();
    /// <summary>
    /// Gets or sets the border.
    /// </summary>
    void set_Border(System::SharedPtr<BorderInfo> value);
    /// <summary>
    /// Gets or sets the default cell padding.
    /// </summary>
    System::SharedPtr<MarginInfo> get_DefaultCellPadding();
    /// <summary>
    /// Gets or sets the default cell padding.
    /// </summary>
    void set_DefaultCellPadding(System::SharedPtr<MarginInfo> value);
    /// <summary>
    /// Gets or sets the default cell text state.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Text::TextState> get_DefaultCellTextState();
    /// <summary>
    /// Gets or sets the default cell text state.
    /// </summary>
    void set_DefaultCellTextState(System::SharedPtr<Aspose::Pdf::Text::TextState> value);
    /// <summary>
    /// Gets or sets the table alignment.
    /// </summary>
    Aspose::Pdf::HorizontalAlignment get_Alignment();
    /// <summary>
    /// Gets or sets the table alignment.
    /// </summary>
    void set_Alignment(Aspose::Pdf::HorizontalAlignment value);
    /// <summary>
    /// Gets or sets the table left coordinate.
    /// </summary>
    float get_Left();
    /// <summary>
    /// Gets or sets the table left coordinate.
    /// </summary>
    void set_Left(float value);
    /// <summary>
    /// Gets or sets the table top coordinate.
    /// </summary>
    float get_Top();
    /// <summary>
    /// Gets or sets the table top coordinate.
    /// </summary>
    void set_Top(float value);
    /// <summary>
    /// Gets or sets the table is broken - will be truncated for next page.
    /// </summary>
    bool get_IsBroken();
    /// <summary>
    /// Gets or sets the table is broken - will be truncated for next page.
    /// </summary>
    void set_IsBroken(bool value);
    /// <summary>
    /// Gets or sets the table column adjustment.
    /// </summary>
    Aspose::Pdf::ColumnAdjustment get_ColumnAdjustment();
    /// <summary>
    /// Gets or sets the table column adjustment.
    /// </summary>
    void set_ColumnAdjustment(Aspose::Pdf::ColumnAdjustment value);
    
    /// <summary>
    /// Get height.
    /// </summary>
    /// <returns>The table height</returns>
    double GetHeight();
    /// <summary>
    /// Set height.
    /// </summary>
    /// <param name="colNumber">The column number.</param>
    /// <param name="textState">The text state for column.</param>
    void SetColumnTextState(int32_t colNumber, System::SharedPtr<Aspose::Pdf::Text::TextState> textState);
    /// <summary>
    /// Clone the table.
    /// </summary>
    /// <returns>The cloned object</returns>
    System::SharedPtr<Table> Clone();
    
    Table();
    
protected:

    /// <summary>
    /// Gets printed rows count(for internal use)
    /// </summary>
    int32_t get_PrintedRowsCount();
    /// <summary>
    /// Gets the column widths of the table.(for internal use)
    /// </summary>
    System::ArrayPtr<double> get_InternalColumnWidths();
    /// <summary>
    /// Gets the column widths of the table.(for internal use)
    /// </summary>
    void set_InternalColumnWidths(System::ArrayPtr<double> value);
    /// <summary>
    /// Gets columns count from colwidhts
    /// </summary>
    int32_t get_ColsCount();
    /// <summary>
    /// Gets or sets special symbols processing like $P $p etc..
    /// </summary>
    bool get_IsProcessSpecialSymbols();
    /// <summary>
    /// Gets text states for columns(for internally use).
    /// </summary>
    System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Text::TextState>> get_ColumnTextStates();
    
    /// <summary>
    /// Gets border height.
    /// </summary>
    static double GetBorderHeight(System::SharedPtr<BorderInfo> border);
    /// <summary>
    /// Gets border width.
    /// </summary>
    static double GetBorderWidth(System::SharedPtr<BorderInfo> border);
    /// <summary>
    /// Gets the column widths of the table.(for internal use)
    /// </summary>
    ///  <param name="columnWidths">The array of column widths.</param>
    /// <param name="index">The index of column.</param>
    static double GetColumnWidth(System::ArrayPtr<double> columnWidths, int32_t index);
    /// <summary>
    /// Adds border into the page's content.
    /// </summary>
    /// <param name="operators">The operators list to be added into the page's content.</param>
    /// <param name="info">The border info.</param>
    /// <param name="start">The start point.</param>
    /// <param name="end">The end point.</param>
    static void DrawLine(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, System::SharedPtr<GraphInfo> info, System::SharedPtr<Point> start, System::SharedPtr<Point> end);
    /// <summary>
    /// Add operators for rectangle.
    /// </summary>        
    /// <param name="info">The border info.</param>
    /// <param name="topLeft">The left top point.</param>
    /// <param name="rightBottom">The right bottom point.</param>
    /// <param name="operators">The operators list to be added into the page's content.</param>
    /// <param name="radius">The border radius.</param>
    static void DrawRoundedRectangle(System::SharedPtr<GraphInfo> info, System::SharedPtr<Point> topLeft, System::SharedPtr<Point> rightBottom, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, double radius);
    /// <summary>
    /// Returns line width.
    /// </summary>
    /// <param name="info">The border info.</param>
    static double GetLineWidth(System::SharedPtr<GraphInfo> info);
    /// <summary>
    /// Returns line single width.
    /// </summary>
    /// <param name="info">The border info.</param>
    static double GetLineSingleWidth(System::SharedPtr<GraphInfo> info);
    static void DrawDoubleBorder(System::SharedPtr<BorderInfo> border, System::SharedPtr<Point> leftTop, System::SharedPtr<Point> rightBottom, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, double left, double right, double top, double bottom);
    /// <summary>
    /// Adds border into the page's content.
    /// </summary>
    /// <param name="border">The border style.</param>
    /// <param name="leftTop">The left top point.</param>
    /// <param name="rightBottom">The right bottom point.</param>
    /// <param name="operators">The operators list to be added into the page's content.</param>
    /// <param name="cornerStyle">The border corner style.</param>
    static void DrawBorder(System::SharedPtr<BorderInfo> border, System::SharedPtr<Point> leftTop, System::SharedPtr<Point> rightBottom, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, BorderCornerStyle cornerStyle);
    static void DrawBackground(System::SharedPtr<Point> leftTop, double width, double height, System::SharedPtr<Color> color, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, BorderCornerType type, double radius);
    static void ApplyBorderToCurXY(double& curX, double& curY, System::SharedPtr<BorderInfo> border, double leftRowBorderWidth);
    double GetAllBordersWidth();
    /// <summary>
    /// Process table.
    /// </summary>
    /// <param name="curX">The current X positon.</param>
    /// <param name="curY">The current Y positon.</param>
    /// <param name="isCalculatedMode">The calculation mode for nested tables.</param>
    /// <param name="pageRealWidth">The real page width.</param>
    /// <param name="bottomMargin">The page bottom Y coordinate.</param>
    /// <param name="page">The page.</param>
    /// <param name="isProcessSpecialSymbols">The condition for special symbols processing like $P $p etc.</param>
    /// <param name="operators">The operators list to be added into the page's content.</param>
    bool Process(double& curX, double& curY, bool isCalculatedMode, double pageRealWidth, double bottomMargin, System::SharedPtr<Page> page, bool isProcessSpecialSymbols, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    /// <summary>
    /// Get column width
    /// </summary>
    /// <param name="stringColumnWidth">The string representation.</param>
    static double GetColumnWidth(System::String stringColumnWidth);
    static System::ArrayPtr<double> GetColumnWidths(System::String columnWidthString, double realWidth);
    /// <summary>
    /// Apply column width.
    /// </summary>
    /// <param name="realWidth">The real width.</param>
    void ApplyColumnWidth(double realWidth);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    Aspose::Pdf::HorizontalAlignment alignment;
    System::SharedPtr<Color> backgroundColor;
    System::SharedPtr<BorderInfo> borderInfo;
    BorderCornerStyle cornerStyle;
    TableBroken broken;
    int32_t cellCountForThisPage;
    Aspose::Pdf::ColumnAdjustment columnAdjustment;
    System::ArrayPtr<double> columnWidths;
    System::String columnWidthString;
    System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Text::TextState>> columnTextStates;
    System::SharedPtr<BorderInfo> defaultCellBorder;
    System::SharedPtr<MarginInfo> defaultCellPadding;
    System::SharedPtr<Aspose::Pdf::Text::TextState> defaultCellTextState;
    System::String defaultColumnWidth;
    bool isBroken;
    bool isNullAddedToRows;
    bool isPreprocessed;
    bool isProcessSpecialSymbols;
    float left;
    int32_t printedRowsCount;
    int32_t repeatingRowsCount;
    System::SharedPtr<Aspose::Pdf::Text::TextState> repeatingRowsStyle;
    System::SharedPtr<Aspose::Pdf::Rows> rows;
    int32_t tableCellCount;
    float top;
    
    /// <summary>
    /// Add operators for rectangle.
    /// </summary>        
    /// <param name="info">The border info.</param>
    /// <param name="topLeft">The left top point.</param>
    /// <param name="rightBottom">The right bottom point.</param>
    /// <param name="operators">The operators list to be added into the page's content.</param>
    static void DrawRectangle(System::SharedPtr<GraphInfo> info, System::SharedPtr<Point> topLeft, System::SharedPtr<Point> rightBottom, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    static void DrawRoundedPathSegment(System::SharedPtr<Point> first, System::SharedPtr<Point> second, System::SharedPtr<Point> third, bool isCornerRounded, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    bool ProcessVerticalBroken(double& curX, double& curY, double bottomMargin, double pageRealWidth, System::SharedPtr<Page> page, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    void PreProcessRow(System::SharedPtr<Row> row, int32_t i);
    void PreProcess();
    void ProcessRowSpanSplit(System::SharedPtr<Row> row, int32_t i, System::SharedPtr<Page> page, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> rowsOperators);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Table_Table_h_

