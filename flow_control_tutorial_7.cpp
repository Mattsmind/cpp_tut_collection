/* Flow Control 7: continue
 *===============================================
 * The continue statement is used to tell our
 * program to stop executing the loop, and start
 * over from the beginning.
 *
 */

// INCLUDES
#include <iostream>

using namespace std;

int main(){

    for (int c = 10; c > 0; --c){
        if (c % 2 == 0) continue;
        cout << c << ", ";
    }
    cout << "counted by 2's" << endl;
}
