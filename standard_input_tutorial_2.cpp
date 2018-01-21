/* Standard Input Tutorial: Strings
 *===============================================
 * In this tutorial, I will work with strings.
 * the cin stream object, will only pull one word
 * from the standard input.
 * We will use getline(), to pull whole sentences
 * and phrases, from the standard input.
 *
 */

// PREPROCSSOR INCLUDES
#include <iostream>
#include <string>

// DEFINE SOME CONSTANTS IN THE PREPROCESSOR
#define NEWLINE '\n'

// USE THE STANDARD NAMESPACE
using namespace std;

// START OUR PROGRAM
int main(){
    //Declare a string object, to reserve some memory for us to use. But don't initialize
    string myStr;

    //Get some user input using getline().
    cout << "What is your name? : ";
    getline(cin, myStr);

    //Greet the user.
    cout << "Well, hello there, " << myStr << "!" << NEWLINE;

    //Get some more input... and change the value of myStr
    cout << "What is your favorite programming language? : ";
    getline(cin, myStr);

    //Use our new value in myStr
    cout << "I also like programming in " << myStr << "." << NEWLINE;

    //Close gracefully.
    return 0;
}


