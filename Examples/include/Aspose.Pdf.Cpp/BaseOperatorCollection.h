﻿#ifndef _Aspose_Pdf_BaseOperatorCollection_h_
#define _Aspose_Pdf_BaseOperatorCollection_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "Operator.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class PhysicalTextSegment; } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Segmenting { class TextSegmentBuilder; } } } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents base class for operator collection.
/// </summary>
class ASPOSE_PDF_SHARED_API ABSTRACT BaseOperatorCollection : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Operator>>
{
    typedef BaseOperatorCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Operator>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::TextSegmentBuilder;
    
public:

    /// <summary>
    /// Returns count of operators.
    /// </summary>
    virtual int32_t get_Count() const = 0;
    /// <summary>
    /// Returns true if collection is read only.
    /// </summary>
    virtual bool get_IsReadOnly() = 0;
    
    virtual /// <summary>
    /// Gets operator by its index.
    /// </summary>
    /// <param name="index">Index of operator. Numbering is starts from 1.</param>
    /// <returns>Operator from requested index</returns>
    System::SharedPtr<Operator> idx_get(int32_t index) = 0;
    virtual /// <summary>
    /// Gets operator by its index.
    /// </summary>
    /// <param name="index">Index of operator. Numbering is starts from 1.</param>
    /// <returns>Operator from requested index</returns>
    void idx_set(int32_t index, System::SharedPtr<Operator> value) = 0;
    
    /// <summary>
    /// Adds new operator into collection.
    /// </summary>
    /// <param name="item"></param>
    virtual void Add(System::SharedPtr<Operator> const &item) = 0;
    /// <summary>
    /// Inserts operator into collection.
    /// </summary>
    /// <param name="index">Index where new operator must be added</param>
    /// <param name="op">Operator which will be insterted</param>
    virtual void Insert(int32_t index, System::SharedPtr<Operator> op) = 0;
    /// <summary>
    /// Clears collection.
    /// </summary>
    virtual void Clear() = 0;
    /// <summary>
    /// </summary>
    /// <param name="item"></param>
    /// <returns></returns>
    virtual bool Contains(System::SharedPtr<Operator> const &item) const = 0;
    /// <summary>
    /// Copies collection into operators array.
    /// </summary>
    /// <param name="array"></param>
    /// <param name="arrayIndex"></param>
    virtual void CopyTo(System::ArrayPtr<System::SharedPtr<Operator>> array, int32_t arrayIndex) = 0;
    /// <summary>
    /// Removes operator from collection.
    /// </summary>
    /// <param name="item"></param>
    /// <returns></returns>
    virtual bool Remove(System::SharedPtr<Operator> const &item) = 0;
    /// <summary>
    /// Returns enumerator of operator collection.
    /// </summary>
    /// <returns>Collection enumerator.</returns>
    virtual System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Operator>>> GetEnumerator() = 0;
    /// <summary>
    /// Cancels last update.
    /// This method may be called when the change should not raise contents update.
    /// </summary>
    virtual void CancelUpdate() = 0;
    /// <summary> 
    /// Suppresses update contents data.
    /// The contents stream is not updated until ResumeUpdate is called.
    /// </summary>
    virtual void SuppressUpdate() = 0;
    /// <summary>
    /// Resumes document update.
    /// Updates contents stream in case there are any pending changes.
    /// </summary>
    virtual void ResumeUpdate() = 0;
    
protected:

    /// <summary>
    /// Returns opetator list.
    /// </summary>
    /// <returns>opetator list.</returns>
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> ToList() = 0;
    virtual System::SharedPtr<Operator> GetUnrestricted(int32_t index) = 0;
    virtual void UpdateData() = 0;
    virtual void DeleteUnrestricted(int32_t index) = 0;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_BaseOperatorCollection_h_

