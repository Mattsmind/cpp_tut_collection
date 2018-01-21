/* Conditional Tenary Operator (?)
 *===============================================
 * In this exercise, I'll be using the
 * conditional tenary operator (?). The question
 * mark.
 * This is an interesting operator, which will
 * return one result for true and another for
 * false.
 *
 */

#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    a = 15;
    b = 8;
    //Here we use our tenary operator
    c = (a > b) ? 99:23;
    // it says: if a is greater than b then c is 99. Otherwise, c is 23.

    //print out the value of c
    cout << c << endl;

    //close our program cleanly
    return 0;
}
