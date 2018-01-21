/* Flow Control 4: for loops
 *===============================================
 * For loops kind of work like while loops,
 * but are initialized a bit differently.
 * This of course is to the best of my present
 * knowledge. They probably operate significantly
 * different, and I'm sure some pro out there
 * can sum up the differences... but I can't.
 * ANYWAYS....
 *
 * for (initial counter; condition to test; increment/decrement) {
 *     do this code stuff;
 *     and this stuff too;
 * }
 *
 * It's better to just use it and see how it
 * operates.
 *
 */

//INCLUDES
#include <iostream>
#include <string>

using namespace std;

int main(){
    //Use some strings just for fun.
    string newline {'\n'};
    string go {"BLASTOFF!!"};

    //We will just jump right into our for loop
    for (int n = 10; n > 0; --n) {
        cout << n << ", ";
    }

    cout << go << newline;

    //Close Clean
    return 0;
}
