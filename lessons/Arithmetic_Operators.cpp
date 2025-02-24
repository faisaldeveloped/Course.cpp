#include <iostream>
using namespace std;

int main()
{
    short int A = 10, B = 20;

    cout << "A + B = " << A + B << endl;
    cout << "A - B = " << A - B << endl;
    cout << "A * B = " << A * B << endl;
    cout << "A / B = " << A / B << endl;
    cout << "A % B = " << A % B << endl;

    return 0;
}

/*

* A = 10 , B = 20
* Operator | Description                                 | Example
---------------------------------------------------------------------------------
*    +     | Adds two operands                           | A + B will give 30
*    -     | Subtract second operand from the first      | A - B will give -10
*    *     | Multiplies both operands                    | A * B will give 200
*    /     | Divides numerator by de-numerator           | B / A will give 2
*    %     | This gives remainder of an integer division | B % A will give 0
*/