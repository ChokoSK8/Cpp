#include <iostream>
#include <string>

#include "Array.hpp"

using namespace std;


int main(void) {

    // An array of strings
    Array<string> strArray( 3 );
    strArray[0] = "begin";
    strArray[1] = "middle";
    strArray[2] = "end";
    cout << strArray << endl; 
 
    // A copy of first array
    Array<string> copy = strArray;
    copy[1] = "other";
    cout << copy << endl;
 
    // An array of integers
    Array<int> intArray( 5 );
    size_t position = 0;
    try {
        while( true ) {
            intArray[ position ] = (position + 1) * 10;
	    position++;
        }
    } catch( out_of_range & e ) {
        cout << e.what() << endl;
    }

    cout << intArray << endl;

    return 0;
}
