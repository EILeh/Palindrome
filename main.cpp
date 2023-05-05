/* Palindrome
 *
 * Description
 *
 * Program asks the user to enter a word and return an information if the input
 * word is palindrome or not.
 *
 * Writer of the program
 *
 * Name: EILeh
 */


#include <iostream>
#include <string>

#ifndef RECURSIVE_FUNC
#define RECURSIVE_FUNC
#endif


// Takes a string as a parameter and checks if it is a palindrome. If the if-
// statements don't apply, function calls itself with a parameter string from
// string index 1 to the second last index until one of if-statements will apply
// and returns the information wether or not the string is palindrome.
bool palindrome_recursive(std::string s)
{

  RECURSIVE_FUNC

    // Checks if the strig length is one or less because if it is, then the
    // string is palindrome and function returns true.
    if ( s.length() <= 1 )
    {
        return true;
    }

    // Checks if the string letter at index 0 is the same as the string at the
    // last index. Last letter is at index length - 1 because index starts from
    // 0. If the letters at index 0 and at index length - 1 are not the same,
    // the string is not palindrome and function returns false.
    if ( s.at(0) != s.at(s.length() - 1 ) )
    {
        return false;
    }

    // Function calls itself with the parameter subtr which return the part of
    // the string from index 1 to the second last index.
    return palindrome_recursive(s.substr(1, s.length() - 2));

}


#ifndef UNIT_TESTING
int main()
{
    std::cout << "Enter a word: ";
    std::string word;
    std::cin >> word;

    if(palindrome_recursive(word)){
        std::cout << word << " is a palindrome" << std::endl;
    } else {
        std::cout << word << " is not a palindrome" << std::endl;
    }
}
#endif
