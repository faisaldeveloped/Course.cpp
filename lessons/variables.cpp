#include <iostream>
using namespace std;

int main()
{

    // int myAge = 24;

    // cout << "My age is " << myAge << " years old." << endl;

    // Declare Many Variables
    // int x = 4;
    // int y = 10;
    // int sum = x + y;

    // cout << sum << endl;

    // char char1 = 'F', char2 = 'A', char3 = 'I', char4 = 'S', char5 = 'A', char6 = 'L';

    // cout << char1 << char2 << char3 << char4 << char5 << char6 << " Reversed is " << char6 << char5 << char4 << char3 << char2 << char1 << endl;

    // Constants
    /*
     * When you do not want others (or yourself) to override existing variable values, use the const keyword (this will declare the varible as "constant", which means unchangeable and read-only)
     */
    const int MinutesPerHour = 60;

    cout << MinutesPerHour << endl;

    const int PI = 3.14;

    cout << PI << endl;
    return 0;
}

// Other Types:
/*
 * A demonstration of other data types:

int myNumber = 52;                // Integer (whole number without decimals)
float myFloatNumber = 7.84;       // Floating point number
double myDoubleNumber = 21.89822; // Large Floating point number.
char myLetter = 'F';              // Character
string myText = "Faisal";         // String (Text)
bool myBoolean = true;            // Boolean (True / False)

Identifiers:
All C++ variables must be identified with unique names.

The IDENTIFIER is the name of the variable

These unique names are called identifiers.

Identifiers can be short names (like x nad y) or more descriptive names (Age, Sum, TotalSales).

Note: It is recommeneded to use descriptive names in order to create understandable and maintainable code

*/

/*
- The general rules for naming variables are:
* Names can contain letters, digits and underscores
* Names must begin with a letter or an underscore (_)
* Names are case sensitive (myVar and myvar are different variables)
* Names cannot contain whitespaces or special characters like (!, #, %, etc.)

* Reserved words (like C++ keywords, such as int) cannot be used as names
*/