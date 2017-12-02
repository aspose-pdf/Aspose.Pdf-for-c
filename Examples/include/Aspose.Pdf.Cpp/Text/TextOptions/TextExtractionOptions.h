﻿#ifndef _Aspose_Pdf_Text_TextOptions_TextExtractionOptions_h_
#define _Aspose_Pdf_Text_TextOptions_TextExtractionOptions_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include "Text/TextOptions/TextOptions.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Text {

namespace TextOptions {

/// <summary>
/// Defines different modes which can be used while converting pdf document into text. See <see cref="TextDevice"/> class.
/// </summary>
class ASPOSE_PDF_SHARED_API TextExtractionOptions FINAL : public Aspose::Pdf::Text::TextOptions::TextOptions
{
    typedef TextExtractionOptions ThisType;
    typedef Aspose::Pdf::Text::TextOptions::TextOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    enum class TextFormattingMode
    {
        /// <summary>
        /// Represent pdf content with a bit of formatting routines.
        /// </summary>
        Pure,
        /// <summary>
        /// Represent pdf content as is, i.e. without formatting.
        /// </summary>
        Raw
    };
    
    
public:

    /// <summary>
    /// Gets formatting mode. 
    /// </summary>
    TextExtractionOptions::TextFormattingMode get_FormattingMode();
    /// <summary>
    /// Gets formatting mode. 
    /// </summary>
    void set_FormattingMode(TextExtractionOptions::TextFormattingMode value);
    /// <summary>
    /// Gets or sets factor that will be applied to scale font size during extraction in pure mode.
    /// Setting of less value leads to more spaces in the extracted text.
    /// Default value is 1 - no scaling;
    /// Setting value to zero allows algorithm choose scaling automatically.
    /// </summary>
    double get_ScaleFactor();
    /// <summary>
    /// Gets or sets factor that will be applied to scale font size during extraction in pure mode.
    /// Setting of less value leads to more spaces in the extracted text.
    /// Default value is 1 - no scaling;
    /// Setting value to zero allows algorithm choose scaling automatically.
    /// </summary>
    void set_ScaleFactor(double value);
    
    /// <summary>
    /// Initializes new instance of the <see cref="TextExtractionOptions"/> object for the specified text formatting mode.
    /// </summary>
    /// <param name="formattingMode">Text formatting mode value.</param>
    TextExtractionOptions(TextExtractionOptions::TextFormattingMode formattingMode);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    TextExtractionOptions::TextFormattingMode _formattingMode;
    double _scaleFactor;
    
};

} // namespace TextOptions
} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Text_TextOptions_TextExtractionOptions_h_

