/* Flow Control 9: switch
 *===============================================
 * The switch statement works almost like an
 * if/else statement, almost!
 *
 * switch (x) {
 *     case constant1:
 *         do this code here;
 *         break;
 *     case constant2:
 *         do this code then;
 *         break;
 *     case constant3:
 *         the do this code here;
 *         break;
 *     defualt:
 *         do this code here;
 *         if no case matches x;
 * }
 *
 * And thats the basic structure of a switch.
 * Lets build one in code that actually works, and
 * see what we can do with it.
 *
 */

//INCLUDES
#include <iostream>

using namespace std;

int main(){
    //Declare a variable for our switch... in this instance 'x'
    int x;

    //Get x with user input
    cout << "Enter a number 1 thru 5: ";
    cin >> x;

    //Create our switch
    switch (x) {
        case 1:
            cout << "you selected 1" << endl;
            break;
        case 2:
        case 3:
            cout << "you selected 2 or 3" << endl;
            break;
        case 4:
            cout << "BOOM" << endl;
            break;
        case 5:
            cout << "There is nothing to see here folks... return to your homes." << endl;
            break;
        default:
            cout << "Only 1-5 were valid choices. " << x << " is not a valid choice." << endl;
    }

    //close clean
    return 0;
}
