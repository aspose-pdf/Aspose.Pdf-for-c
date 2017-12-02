﻿#ifndef _Aspose_Pdf_Generator_FloatingBox_h_
#define _Aspose_Pdf_Generator_FloatingBox_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>

#include "Generator/BaseParagraph.h"

namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { class BorderInfo; } }
namespace Aspose { namespace Pdf { class ColumnInfo; } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { class Paragraphs; } }
namespace Aspose { namespace Pdf { enum class VerticalAlignment; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Operator; } }

namespace Aspose {

namespace Pdf {

/// Represents a FloatingBox in a Pdf document. FloatingBox is custom positioned.
class ASPOSE_PDF_SHARED_API FloatingBox : public Aspose::Pdf::BaseParagraph
{
    typedef FloatingBox ThisType;
    typedef Aspose::Pdf::BaseParagraph BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PageGenerator;
    
public:

    /// Gets or sets a column info
    System::SharedPtr<Aspose::Pdf::ColumnInfo> get_ColumnInfo();
    /// Gets or sets a column info
    void set_ColumnInfo(System::SharedPtr<Aspose::Pdf::ColumnInfo> value);
    /// Gets or sets a float value that indicates the width of the floating box.
    double get_Width();
    /// Gets or sets a float value that indicates the width of the floating box.
    void set_Width(double value);
    /// Gets or sets a float value that indicates the height of the floating box.
    double get_Height();
    /// Gets or sets a float value that indicates the height of the floating box.
    void set_Height(double value);
    /// Gets or sets a bool value that indicates whether the paragraph need to be repeated on next page.
    /// Default value is false.The attribute is only valid when the paragraph itself and the object its ReferenceParagraphID referred to both are included in RepeatingRows.
    bool get_IsNeedRepeating();
    /// Gets or sets a bool value that indicates whether the paragraph need to be repeated on next page.
    /// Default value is false.The attribute is only valid when the paragraph itself and the object its ReferenceParagraphID referred to both are included in RepeatingRows.
    void set_IsNeedRepeating(bool value);
    /// Gets or sets a <see cref="Paragraphs"/> collection that indicates all paragraphs in the cell.
    System::SharedPtr<Aspose::Pdf::Paragraphs> get_Paragraphs();
    /// Gets or sets a <see cref="Paragraphs"/> collection that indicates all paragraphs in the cell.
    void set_Paragraphs(System::SharedPtr<Aspose::Pdf::Paragraphs> value);
    /// Gets or sets a value that indicates in case with fixed row height, do content will be truncated if it go out of margin
    bool get_IsExtraContentClip();
    /// Gets or sets a value that indicates in case with fixed row height, do content will be truncated if it go out of margin
    void set_IsExtraContentClip(bool value);
    /// Gets or sets a <see cref="BorderInfo"/> object that indicates the border info of the floating box.
    System::SharedPtr<BorderInfo> get_Border();
    /// Gets or sets a <see cref="BorderInfo"/> object that indicates the border info of the floating box.
    void set_Border(System::SharedPtr<BorderInfo> value);
    /// Gets or sets a <see cref="Aspose.Pdf.Color"/> object that indicates the background color of the 
    /// floating box.
    System::SharedPtr<Color> get_BackgroundColor();
    /// Gets or sets a <see cref="Aspose.Pdf.Color"/> object that indicates the background color of the 
    /// floating box.
    void set_BackgroundColor(System::SharedPtr<Color> value);
    /// Gets or sets a <see cref="MarginInfo"/> object that indicates the padding of the floating box.
    System::SharedPtr<MarginInfo> get_Padding();
    /// Gets or sets a <see cref="MarginInfo"/> object that indicates the padding of the floating box.
    void set_Padding(System::SharedPtr<MarginInfo> value);
    /// <summary>
    /// Gets or sets the table left coordinate.
    /// </summary>
    double get_Left();
    /// <summary>
    /// Gets or sets the table left coordinate.
    /// </summary>
    void set_Left(double value);
    /// <summary>
    /// Gets or sets the table top coordinate.
    /// </summary>
    double get_Top();
    /// <summary>
    /// Gets or sets the table top coordinate.
    /// </summary>
    void set_Top(double value);
    /// <summary>
    /// Gets or sets a vertical alignment of text fragment. 
    /// </summary>
    Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    /// <summary>
    /// Gets or sets a vertical alignment of text fragment. 
    /// </summary>
    void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="FloatingBox"/> class with specified width and height.
    /// </summary>
    /// <param name="width">The width of the box.</param>
    /// <param name="height">The height of the box.</param>
    FloatingBox(float width, float height);
    /// <summary>
    /// Initializes a new instance of the <see cref="FloatingBox"/> class.
    /// </summary>
    FloatingBox();
    
    /// <summary>
    /// Clones a new <see cref="FloatingBox"/> object. Paragraphs in the floating box are not cloned.
    /// </summary>
    /// <returns>The new <see cref="FloatingBox"/> object.</returns>
    System::SharedPtr<FloatingBox> Clone();
    
protected:

    bool Process(double& curX, double& curY, double pageHeight, double pageWidth, System::SharedPtr<MarginInfo> pageMargin, System::SharedPtr<Page> page, double bottomY, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Color> backgroundColor;
    System::SharedPtr<BorderInfo> border;
    System::SharedPtr<Aspose::Pdf::ColumnInfo> columnInfo;
    double height;
    double left;
    bool isHeightSet;
    bool isExtraContentClip;
    bool isNeedRepeating;
    bool isWidthSet;
    System::SharedPtr<MarginInfo> padding;
    System::SharedPtr<Aspose::Pdf::Paragraphs> paragraphs;
    double top;
    double width;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_FloatingBox_h_

