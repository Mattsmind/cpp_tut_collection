/* Flow Control 6: break
 *===============================================
 * In this exercise we will use the break keyword
 * to "break" out of our loop.
 *
 */

#include <iostream>

using namespace std;

int main(){
    //Start our for loop
    for (int n=10; n>0; --n){
        //Print n
        cout << n << ", ";
        //use an if else to check n and break if n is 2
        if (n==2) {
            cout << "COUNTDOWN ABORTED!" << endl;
            //Kill our loop
            break;
        }
    }

    // End our program
    return 0;
}
