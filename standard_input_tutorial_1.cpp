/* Standard Input/Output tutorial
 *===============================================
 * While the standard output method has been used
 * several times in just about every exercise so
 * far... I've not yet touched on the standard
 * input stream.
 * This tutorail will start to touch base on
 * std::cin to make programs more interatctive.
 *
 */

#include <iostream>

using namespace std;

int main(){
    //Declare some variables, but don't initialize them.
    int a, b;
    int result;

    //Get some user input
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;

    //Let's do some math
    result = a + b;
    cout << "The SUM of " << a << " and " << b << " is " << result << ".\n";

    //Exit Gracefully
    return 0;
}
