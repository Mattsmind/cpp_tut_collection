/* String tutorial 3
 *===============================================
 * More playing around with strings, and other
 * variables.
 * In the previous exercies, I ran into issues
 * with using string, because I didn't use the
 * std namespace. Thankfully I figured it out
 * rather quickly, and in the process learned,
 * that the std namespace applies to a great
 * deal of the standard libraries.
 * This time we will save some typing, and use
 * the std namespace.
 */

// PREPROCESSOR INCLUDES
#include <iostream>
#include <string>

// Don't forget our namespace
using namespace std;

int main() {
    //Initialize some string objects
    string myString1 {"This is my really long string \
that i needed to break up over \
multiple lines.\v"};

    string myString2 = "Another example of a \
multiline string variable, created with a slightly \
different method.";

    cout << myString1 << endl;
    cout << myString2 << endl;
    cout << "This is going " "to get printed"         " to the std out." << endl;

    //raw string
    string myRawString {R"(This is my raw string)"};
    cout << myRawString << endl;

    // UTF-8
    string myUTF8 {u8"This is a utf-8 string"};
    cout << myUTF8 << endl;

    //close cleanly
    return 0;
}
