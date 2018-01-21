/* Constants Tutorial Exercise 1
 *===============================================
 * In this simple tutorial, I'll calculate the
 * circumfurence of a circle with a radius of
 * 5.0 imaginary units... they can be anything
 * you imagine them to be!
 *
 * The focus of this tutorial is to use constants
 * to see how they behave in C++
 *
 */

//the standard stuff for these tutorials is <iostream>
#include <iostream>

//use the std namespace
using namespace std;

//declare and initialize some constants
const double pi = 3.14159;
const char newline = '\n';

//start our main() function
int main() {
    //declare the variable that will hold our radius and initialize it with a value of 5.0
    double r = 5.0;
    //declare our circle varible to hold our answer
    double circle;

    //do the math to calculate the circumference.
    circle = 2 * pi * r;

    //display our results on the std out.
    cout << circle;
    //use our constant to end the line instead of std::endl
    cout << newline;


    //End our program cleanly
    return 0;
}
