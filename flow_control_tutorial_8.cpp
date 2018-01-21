/* Flow Control 8: goto
 *===============================================
 * When I look at the goto statement, it reminds
 * me a lot of old BASIC. And that's precisely
 * how it works. And just like BASIC, it's old
 * and hardly ever used, nor does it have any
 * real signicance in modern programming.
 * But, will use it for demonstration purposes.
 * It's important to note that that goto
 * statement will do just that... goto someLabel
 * reguardless of where it is currently in the
 * code. And so, it should be used with care
 * if even used at all.
 *
 */

//INCLUDES
#include <iostream>

//use the standard namespace
using namespace std;

int main(){
    int x = 10;

//heres our label for the goto statement
someLabel:
    //Print the value of x
    cout << x << ", ";
    //Decrese the value of x by 1
    --x;
    // if x is greater than 0 goto our label we created.
    if (x > 0) goto someLabel;
    //print blastoff.... for fun
    cout << "BLASTOFF" << endl;
    //close cleanly
    return 0;
}
