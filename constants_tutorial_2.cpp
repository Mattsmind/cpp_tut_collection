/* Constants Tutorial Exercise 2
 *===============================================
 * In the last exercise, I used the const keyword
 * to create constant variables.
 * In this exercise, I will define the constants
 * with a preprocessor definition.
 *
 */

 // PREPROCESSOR COMMANDS
 #include <iostream>
 #define NEWLINE '\n'
 #define PI 3.14159

 using namespace std;

 int main() {
    // Declare and Initialize the Variables needed for this operation
    double r = 5.0;
    double circle;
    // Our formula for the circumference of a circle... using our PI definition
    circle = 2 * PI * r;
    // Print the answer to the console. use our NEWLINE definition to create the newline
    cout << circle;
    cout << NEWLINE;
    //close our program gracefully
    return 0;
 }
