/* Another strings tutorial
 *===============================================
 * Just another tutorial on strings using a
 * slightly differing method from the first
 * exercise.
 *
 */

 // Preprocessor
 // We will need to include <iostream> and <string> standard libraries
 #include <iostream>
 #include <string>

 int main() {
    //create some strings
    std::string s1 = "This is the string called s1! It was created using c-like initialization.";
    std::string s2 ("This string, called s2, was created using constructor initialization.");
    std::string s3 {"String s3 was created using uniform initialization."};

    //now lets print some strings.
    //i didn't use the std namespace so we will do this the long way. its good practice.
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    std::cout << s3 << std::endl;

 }
