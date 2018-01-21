/* Flow Control: if/else
 *===============================================
 * In this tutorial, we finially get to some of
 * the meat and potatoes of programming...
 * flow control.
 * We will start off with something simple. The
 * if else statement.
 *
 * if (condition) {
 *     do some stuff;
 *     do some more stuff;
 * }
 *
 * If the condition evaluates to true, the code
 * in the block will be executed. Otherwise, if
 * the condition is false, then the code will
 * simply be ignored.
 *
 */

//PREPROCESSOR INCLUDES
#include <iostream>
#include <string>
#include <sstream>

//USE THE STANDARD NAMESPACE
using namespace std;

//BEGIN OUR MAIN FUNCTION
int main(){
    //Declare some variables to reserve some memory
    string myStr;
    int myInt = 0;

    //Get some user input
    cout << "Give me a number: ";
    getline(cin, myStr);
    stringstream(myStr) >> myInt;

    //Begin our if/else if/else statement block
    if (myInt > 100) {
        cout << "The number " << myInt << " is larger than 100" << endl;
    }
    else if (myInt == 100){
        cout << "The number is 100" << endl;
    }
    else {
        cout << "The number " << myInt << " is smaller than 100" << endl;
    }

    //Close Cleanly
    return 0;
}
