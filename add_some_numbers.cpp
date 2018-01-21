/* Add Some Numbers
 *===============================================
 * Simple program that adds to static numbers
 * together. 52 and 84. First it will add 1 to
 * the value in 'a'.... 52.
 *
 */

 // Preprocessor stuff
 #include <iostream>

 // Namespaces
 using namespace std;

 int main() {
    // Declare variables.
    int a, b;
    int result;

    // Assign values
    a = 52;
    b = 84;

    // Add our numbers and assign to result
    a = a + 1;
    result = a + b;

    // Print the results to the console
    cout << result << endl;

    // Close the program ...
    return 0;

 }
