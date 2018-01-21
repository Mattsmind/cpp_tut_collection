/* First tutorial on strings in C++
 *===============================================
 * This is a tutorial covering the very basics
 * on using strings in C++.
 * To use this datatype in C++, we must include
 * the <string> library.
 *
 */

 #include <iostream>
 #include <string>

using namespace std;

int main() {
    // Declare our string object (variable)
    string myString;
    // Assign a string value to our string object.
    myString = "This is the string, contained in the variable we created, called myString.";
    // Print the string to the standard out.
    cout << myString << endl;
    // Close out program cleanly
    return 0;

}
