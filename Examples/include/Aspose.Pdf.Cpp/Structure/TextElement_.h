﻿#ifndef _Aspose_Pdf_Structure_TextElement__h_
#define _Aspose_Pdf_Structure_TextElement__h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include "Structure/Element.h"

namespace Aspose { namespace Pdf { namespace Structure { class ElementFactory; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { class OperatorCollection; } }

namespace Aspose {

namespace Pdf {

namespace Structure {

/// <summary>
/// General text element of document logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API TextElement : public Aspose::Pdf::Structure::Element
{
    typedef TextElement ThisType;
    typedef Aspose::Pdf::Structure::Element BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Structure::ElementFactory;
    
public:

    /// <summary>
    /// Gets the value of text structure element.
    /// </summary>
    System::String get_Text();
    
protected:

    TextElement(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> engineDict);
    
private:

    static System::SharedPtr<OperatorCollection> GetPageOperators(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dict);
    static System::String FindTextInPageOperators(System::SharedPtr<OperatorCollection> operators, System::String value);
    
};

} // namespace Structure
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Structure_TextElement__h_

