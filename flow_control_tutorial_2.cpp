/* Flow Control: the while loop
 *===============================================
 * Last exercise we covered the if/else if/else
 * statements. These are great to test some
 * condition, then proceed one way or another
 * based on the out put.
 * The while loop will continue to execute it's
 * block of code for as long as condition is
 * true. When the condition becomes false, the
 * program moves on.
 * We must be careful with while loops, as they
 * can create infinte loops, which will surely
 * crash a computer.
 *
 */

//PREPROCESSOR INLUCDES
#include <iostream>
#include <string>
#include <sstream>

//USE TEH STANDARD NAMESPACE
using namespace std;

//BEGIN main()
int main(){
    //Declare and initialize our counter variable.
    int n = 10;

    //Print our counter, then decrement the counter, and do it all over.
    while (n > 0) {
        cout << n << ", ";
        --n;
    }

    //Make sure our counter hit 0
    if (n == 0) {
        cout << "BLASTOFF!!!" << endl;
    } else {
        cout << "Something went wrong!!" << endl;
    }

    //Close Cleanly
    return 0;

}
