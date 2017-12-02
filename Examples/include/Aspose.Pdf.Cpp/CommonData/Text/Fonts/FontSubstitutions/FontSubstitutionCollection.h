﻿#ifndef _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_FontSubstitutionCollection_h_
#define _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_FontSubstitutionCollection_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "CommonData/Text/Fonts/FontSubstitutions/FontSubstitution.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace Text { namespace Fonts { class FontRegistry; } } } } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace Fonts { class FontSubstitutionTests; } } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents font substitution strategies collection.
/// </summary>
//<<--REFACTORING: Old code: public sealed class FontSubstitutionCollection : ICollection
class ASPOSE_PDF_SHARED_API FontSubstitutionCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::FontSubstitution>>
{
    typedef FontSubstitutionCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Text::FontSubstitution>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::FontRegistry;
    friend class Aspose::Pdf::Tests::Fonts::FontSubstitutionTests;
    
private:

    class ASPOSE_PDF_SHARED_API FontSubstitutionsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::FontSubstitution>>
    {
        typedef FontSubstitutionsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Text::FontSubstitution>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<FontSubstitution> get_Current() const;
        
        FontSubstitutionsEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<FontSubstitution>>> fontSubstitutions);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~FontSubstitutionsEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<FontSubstitution>>> cursor;
        int32_t viewed;
        bool mIsDisposed;
        
    };
    
    
public:

    ///<summary>
    /// Gets the number of <see cref="Font"/> object elements actually contained in the collection. 
    /// </summary>
    int32_t get_Count() const;
    ///<summary>
    /// Gets an object that can be used to synchronize access to the collection.
    /// </summary>
    System::SharedPtr<System::Object> get_SyncRoot();
    ///<summary>
    /// Gets a value indicating whether access to the collection is synchronized (thread safe). 
    ///</summary>
    bool get_IsSynchronized();
    
    ///<summary>
    /// Returns an enumerator for the entire collection.
    ///</summary>
    /// <returns>Enumerator object</returns>
    //<<--REFACTORING: Old code: public IEnumerator GetEnumerator()
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<FontSubstitution>>> GetEnumerator();
    ///<summary>
    /// Copies the entire collection to a compatible one-dimensional Array, starting at the specified index of the target array
    ///</summary> 
    /// <param name="array">Array of objects which will be copied.</param>
    /// <param name="index">Starting index from which copying will be started.</param>
    //<<--REFACTORING: Old code: public void CopyTo(Array array, int index)
    void CopyTo(System::ArrayPtr<System::SharedPtr<FontSubstitution>> array, int32_t index);
    /// <summary>
    /// Adds new font substitution object to the collection.
    /// </summary>
    /// <param name="fontSubstitution">Font substitution strategy.</param>
    void Add(System::SharedPtr<FontSubstitution> const &fontSubstitution);
    /// <summary>
    /// Clears the font substitution collection.
    /// </summary>
    void Clear();
    
    /// <summary>
    /// Gets the font element at the specified index.
    /// </summary>
    /// <param name="index">Index within the collection.</param>
    /// <returns>FontSubstitution object.</returns>
    System::SharedPtr<FontSubstitution> idx_get(int32_t index);
    
protected:

    ///<summary>
    /// Initializes collection object
    ///</summary>
    FontSubstitutionCollection();
    
    /// <summary>
    /// Deletes the font substitution element at the specified index.
    /// </summary>
    void Delete(int32_t index);
    /// <summary>
    /// Deletes the font substitution element.
    /// </summary>
    void Delete(System::SharedPtr<FontSubstitution> fontSubstitution);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<FontSubstitution>>> fontSubstitutions;
    System::SharedPtr<System::Object> syncRoot;
    
    ///<summary>
    ///</summary>
    bool get_IsReadOnly();
    
    /// <summary>
    /// Deletes the font substitution element.
    /// </summary>
    bool Remove(System::SharedPtr<FontSubstitution> const &fontSubstitution);
    /// <summary>
    /// </summary>
    bool Contains(System::SharedPtr<FontSubstitution> const &item) const;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_CommonData_Text_Fonts_FontSubstitutions_FontSubstitutionCollection_h_

