/* Flow Control 3: do / while loops
 *===============================================
 * Previously, we use a while loop to do the
 * work. This time, we will use a variant, the
 * do/while loop.
 * The difference is, the while loop evaluates
 * if condition is true or false, and then
 * decides to run the block of code or not.
 * In a do/while loop, the block of code is
 * run at least once, and then evaluated.
 *
 * do {
 *     some thing;
 *     something else;
 * } while (true)
 *
 */

#include <iostream>
#include <string>

#define NEWLINE '\n'

using namespace std;

int main(){
    //Reserve some space in memory to hold our string.
    string myStr;

    //Run our do/while loop
    do {
        cout << "Enter text: ";
        getline(cin,myStr);
        cout << "You entered: " << myStr << NEWLINE;
    } while (myStr != "goodbye");


    return 0;

}
