#ifndef __ARRAY_H__
#define __ARRAY_H__

#include <cstddef>
#include <iostream>
#include <sstream>
#include <stdexcept>

template <typename ELEMENT>
class Array {
    ELEMENT * rawArray;
    size_t size;
public:
    
    Array( size_t size = 10 );
    Array( const Array<ELEMENT> & original );
    ~Array();

    size_t getSize() const;

    Array<ELEMENT> & operator=(  const Array<ELEMENT> & original );
    ELEMENT & operator[]( size_t position ) const;
};

template <typename ELEMENT>
std::ostream & operator<<( std::ostream & os, const Array<ELEMENT> & array );

// --- Implementations --- 

template <typename ELEMENT>
Array<ELEMENT>::Array( size_t size ) :  rawArray( new ELEMENT[size] ), size(size){
}

template <typename ELEMENT>
Array<ELEMENT>::Array( const Array<ELEMENT> & original ) {
    this->rawArray = 0;
    *this = original;
}

template <typename ELEMENT>
Array<ELEMENT>::~Array() {
    delete [] this->rawArray;
}

template <typename ELEMENT>
size_t Array<ELEMENT>::getSize() const {
    return this->size;
}

template <typename ELEMENT>
Array<ELEMENT> & Array<ELEMENT>::operator=( const Array<ELEMENT> & original ) {
    if ( this->rawArray != 0 ) delete [] this->rawArray;
    this->size = original.size;
    this->rawArray = new ELEMENT[ this->size ];
    for( size_t position=0; position<this->size; ++position ) {
        this->rawArray[ position ] = original.rawArray[ position ];
    }

    return *this;
}

template <typename ELEMENT>
ELEMENT & Array<ELEMENT>::operator[]( size_t position ) const {
    if ( position >= this->size ) {
        std::stringstream buffer;
        buffer << "Bad position " << position;
        throw std::out_of_range( buffer.str() ); 
    }
    return this->rawArray[ position ];
}


template <typename ELEMENT>
std::ostream & operator<<( std::ostream & os, const Array<ELEMENT> & array ) {
    os << "[";
    size_t size = array.getSize();
    for( size_t position=0; position<size; ++position ) {
        os << array[position];
        if ( position < size-1 ) os << ", ";
    }
    return os << "]";
}

#endif
