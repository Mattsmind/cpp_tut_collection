/* Flow Control 5: More for loops
 *===============================================
 * This time we will do a ranged-based for loop.
 * These are very similar to for loops in the
 * last exercise. They have a slightly different
 * syntax but opperate, pretty much the same,
 * just working with a different set of
 * information.
 *
 * for ( declaration : range ) {
 *    do this stuff;
 *    and do this stuff too;
 * }
 *
 * In this exercise, we will iterate over a
 * string, and print each char in a box. [x]
 *
 */

//INCLUDES
#include <iostream>
#include <string>

//USE STD NAMESPACE
using namespace std;

//BEGIN OUR main() FUNCTION

int main() {
    //Declare and initialize our string to iterate over.
    string myStr {"Hello!"};

    //Using a ranged-based for loop, iterate over our string.
    for (char x : myStr) {
        //Print out char x, surrounded by a box. [x]
        cout << "[" << x << "]";
    }

    //Flush the stream and end the line.
    cout << endl;

    //Close Clean
    return 0;
}
