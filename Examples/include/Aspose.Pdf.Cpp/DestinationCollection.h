﻿#ifndef _Aspose_Pdf_DestinationCollection_h_
#define _Aspose_Pdf_DestinationCollection_h_

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/collections/keyvalue_pair.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { class IPdfDocument; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represents the collection of all destinations (a name tree mapping name strings to destinations (see 12.3.2.3, "Named Destinations") and (see 7.7.4, "Name Dictionary")) in the pdf document. 
/// </summary>
class ASPOSE_PDF_SHARED_API DestinationCollection FINAL : public System::Collections::Generic::ICollection<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>>, public System::Collections::Generic::IEnumerable<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>>
{
    typedef DestinationCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>> BaseType;
    typedef System::Collections::Generic::IEnumerable<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Document;
    
protected:

    class ASPOSE_PDF_SHARED_API DestinationEnumerator : public System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>>
    {
        typedef DestinationEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>> get_Current() const;
        
        /// <summary>
        /// Initializes new DestinationEnumerator collection instance from the <paramref name="destinations" />.
        /// </summary>
        /// <param name="destinations">The collection of destinations.</param>
        DestinationEnumerator(System::SharedPtr<System::Collections::Generic::ICollection<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>>> destinations);
        
        /// <summary>
        /// Advances the enumerator to the next destination of the collection.
        /// </summary>
        /// <returns>True if the enumerator was successfully advanced to the next destination; false if the enumerator has passed the end of the collection.</returns>
        bool MoveNext();
        /// <summary>
        /// Sets the enumerator to the initial position, which is before the first destination 
        /// in the collection.
        /// </summary>
        void Reset();
        void Dispose();
        
        virtual ~DestinationEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        bool initialized;
        System::SharedPtr<System::Collections::Generic::ICollection<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>>> destinations;
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>>> enumerator;
        int32_t viewed;
        bool mIsDisposed;
        
    };
    
    
public:

    int32_t get_Count() const;
    /// <summary>
    /// Always returns true
    /// </summary>
    bool get_IsReadOnly();
    
    /// <summary>
    /// Collection is readonly
    /// </summary>
    void Add(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>> const &item);
    /// <summary>
    /// Collection is readonly
    /// </summary>
    void Clear();
    /// <summary>
    /// Copies data to array
    /// </summary>
    void CopyTo(System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>> array, int32_t arrayIndex);
    /// <summary>
    /// Collection is readonly
    /// </summary>
    bool Remove(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>> const &item);
    
    /// <summary>
    /// Gets the destination object by index.
    /// </summary>
    /// <param name="index">The index of destination to get.</param>
    /// <returns>Destination.</returns>
    System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>> idx_get(int32_t index);
    
    /// <summary>
    /// Returns the page number of destination by the name.
    /// </summary>
    /// <param name="destinameName">The name of destination.</param>
    /// <param name="useCache">Determines whether cached version of collection is used or not.</param>
    /// <returns>The page number if destination was found; otherwise, -1.</returns>
    int32_t GetPageNumber(System::String destinameName, bool useCache);
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>>> GetEnumerator();
    /// <summary>
    /// Returns the index of destination in collection.
    /// </summary>
    /// <param name="value">The value to find.</param>
    /// <returns>The index of destination in collection.</returns>
    int32_t IndexOf(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>> value);
    /// <summary>
    /// Determines whether a destination is in collection or not.
    /// </summary>
    /// <param name="value">The value to find.</param>
    /// <returns>True if a destination is in collection; otherwise, false.</returns>
    bool Contains(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>> const &value) const;
    
protected:

    /// <summary>
    /// Initializes new Destination collection instance from the <paramref name="document" />.
    /// </summary>
    /// <param name="document">Document contained destinations.</param>
    DestinationCollection(System::SharedPtr<Document> document);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>>> InnerList;
    System::SharedPtr<Engine::IPdfDocument> _document;
    
    /// <summary>
    /// Initializes the collection of destinations.
    /// </summary>
    void Init();
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_DestinationCollection_h_

