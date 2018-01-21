/* Variable Initialization
 * ==============================================
 * Short tutorial with no real output
 * just using variables with all the methods of
 * initialization in the C++11 standard.
 *
 */

 #include <iostream>
 using namespace std;

 int main() {
    // Each of these forms of initialization are equal to one another.
    int a = 25; // declared and initialized with the "=" equal sign to a value of 25. c-like initialization
    int b (4); // declared and initialized with the "()" parenthesis to a value of 4. contructor initialization
    int c {5}; // declared and initialized with the "{}" curly braces to a value of 5. uniform initialization

    int result; // declared and UNINITIALIZED.

    // Lets do some math with our variables.
    b = b + c;
    result = a - b;

    cout << result << endl;

    // Close the program... return 0... (success)
    return 0;
 }
