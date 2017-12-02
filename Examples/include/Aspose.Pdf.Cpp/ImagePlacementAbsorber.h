﻿#ifndef _Aspose_Pdf_ImagePlacementAbsorber_h_
#define _Aspose_Pdf_ImagePlacementAbsorber_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/stack.h>
#include <drawing/drawing2d/matrix.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class ImagePlacementCollection; } }
namespace Aspose { namespace Pdf { enum class BlendMode; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class OperatorCollection; } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { class XImage; } }
namespace Aspose { namespace Pdf { namespace Operators { class SetAdvancedColor; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents an absorber object of image placement objects.
/// Performs search of image usages and provides access to search results via <see cref="ImagePlacementAbsorber.ImagePlacements"/> collection.
/// </summary>
/// <remarks>
/// The <see cref="ImagePlacementAbsorber"/> object is basically used in images search scenario.
/// When the search is completed the occurrences are represented with <see cref="ImagePlacement"/> objects that the <see cref="ImagePlacementAbsorber.ImagePlacements"/> collection contains.
/// The <see cref="ImagePlacement"/> object provides access to the image placement properties: dimensions, resolution etc.
/// </remarks>
/// <example>
/// The example demonstrates how to find images on the first PDF document page and get the image placement properties.
/// <code></code> 
/// </example>
class ASPOSE_PDF_SHARED_API ImagePlacementAbsorber FINAL : public System::Object
{
    typedef ImagePlacementAbsorber ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets collection of image placement occurrences that are presented with <see cref="ImagePlacement"/> objects.
    /// </summary>
    System::SharedPtr<ImagePlacementCollection> get_ImagePlacements();
    
    /// <summary>
    /// Initializes new instance of the <see cref="ImagePlacementAbsorber"/> object.
    /// </summary>
    ImagePlacementAbsorber();
    
    /// <summary>
    /// Performs search on the specified page.
    /// </summary>
    /// <param name="page">Pdf pocument page object.</param>
    void Visit(System::SharedPtr<Page> page);
    /// <summary>
    /// Performs search on the specified document.
    /// </summary>
    /// <param name="pdf">Pdf pocument object.</param>
    void Visit(System::SharedPtr<Document> pdf);
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<ImagePlacementCollection> Selected;
    System::SharedPtr<System::Collections::Generic::Stack<System::SharedPtr<System::Drawing::Drawing2D::Matrix>>> graphicsState_mat;
    System::SharedPtr<System::Collections::Generic::Stack<BlendMode>> graphicsState_bm;
    
    void Process(System::SharedPtr<Page> page, System::SharedPtr<OperatorCollection> contents, System::SharedPtr<Resources> resources);
    bool ProcessContents(System::SharedPtr<Page> page, System::SharedPtr<OperatorCollection> contents, System::SharedPtr<Resources> resources);
    void ComputeImageSizeParameters(System::SharedPtr<XImage> image, double& yIndent, double& xIndent, int32_t& resVertical, int32_t& resHorizontal, double& scaledWidth, double& scaledHeight, int32_t& rotationAngle);
    void ProcessPatterns(System::SharedPtr<Page> page, System::SharedPtr<Operators::SetAdvancedColor> opScn);
    static bool ContainsImage(System::SharedPtr<Resources> resources, System::String imageName);
    static bool ContainsForm(System::SharedPtr<Resources> resources, System::String formName);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_ImagePlacementAbsorber_h_

