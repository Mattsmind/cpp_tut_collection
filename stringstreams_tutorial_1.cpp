/* String Streams Tutorial
 *===============================================
 * This will be a brief tutorial on using
 * stringstreams from the <sstreams> standard
 * library.
 * This library allows strings to be treated as
 * streams.
 * At this point in my experience, I'm not 100%
 * sure why this is beneficial, but hopefully
 * it will be come clearer as we progress.
 *===============================================
 * After this tutorial, it has become more clear
 * to me on the usefulness of sstream.
 * It is very beneficial in converting from one
 * datatype to another.
 *
 */

// PREPROCESSOR INCLUDES
#include <iostream>
#include <string>
#include <sstream>

//USE THE STANDARD NAMESPACE
using namespace std;

//BEGIN OUR MAIN FUNCTION
int main(){
   //Declare and initialize some variables. (reserve some memory)
   string myStr;
   float price = 0;
   int quantity = 0;

   //Get some user input. First we ask for the item price. Then a quantity of the item.
   cout << "Item Price: ";
   getline(cin,myStr);
   stringstream(myStr) >> price;
   cout << "Item Quantity: ";
   getline(cin, myStr);
   stringstream(myStr) >> quantity;

   //Calculate the total cost for n items at some price.
   cout << "Total Price: " << price * quantity << endl;

   //End Cleanly
   return 0;

}
