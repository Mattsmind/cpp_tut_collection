/* sizeof() tutorial
 *===============================================
 * Tutorial to give us the size of different
 * data types.
 * Also, to illustrate a couple ways to use
 * sizeof()
 *
 */

#include <iostream>
#include <string>

using namespace std;

int main(){
    int a = 54;
    double d;
    long c;
    short s;
    string ms;
    float f;
    unsigned long int j;
    char h;
    unsigned char x;

    cout << sizeof(a) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(j) << endl;
    cout << sizeof(s) << endl;
    cout << sizeof(ms) << endl;
    cout << sizeof(f) << endl;
    cout << sizeof(h) << endl;
    cout << sizeof(x) << endl;

    return 0;
}
