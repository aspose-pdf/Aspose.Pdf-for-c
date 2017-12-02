﻿#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_SoundEncoding_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_SoundEncoding_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// The encoding format for the sample data.
/// </summary>
enum class SoundEncoding
{
    /// <summary>
    /// Unspecified or unsigned values in the range 0 to 2^bits − 1.
    /// </summary>
    Raw,
    /// <summary>
    /// Twos-complement values.
    /// </summary>
    Signed,
    /// <summary>
    /// μ-law–encoded samples.
    /// </summary>
    MuLaw,
    /// <summary>
    /// A-law–encoded samples.
    /// </summary>
    ALaw
};

class ASPOSE_PDF_SHARED_API SoundEncodingConverter : public System::Object
{
    typedef SoundEncodingConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::String ToString(SoundEncoding value);
    static System::String ToXfdfString(SoundEncoding value);
    static SoundEncoding ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_SoundEncoding_h_

