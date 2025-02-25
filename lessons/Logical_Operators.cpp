#include <iostream>
using namespace std;

int main()
{
    /*
    * A = 1 (True) , B = 0 (False)
    * Operator     * Description                                                                                                                                       * Example
        &&         Called Logical AND operator. If both the operands are non-zero, then condition becomes true.                                                          (A && B) is false
        ||         Called Logical OR operator. If any of the two operands is non-zero, then condition becomes true.                                                      (A ||B) is true.
        !          Called Logical NOT operator. Use to reverses the logical state of its operand. If a condition is true then Logical NOT operator will make false.      !(A && B) is true.
    */

    bool A = 1, B = 0;

    cout << (A && B) << endl;
    cout << (A || B) << endl;
    cout << !A << endl;
    cout << !B << endl;
    cout << !(A && B) << endl;
    cout << !(A || B) << endl;

    bool Result;

    // NOT(5 > 6 OR 7 = 7) AND NOT (1 OR false)

    Result = !(5 > 6 || 7 == 7) && !(1 || 0);

    cout << Result << endl;
    return 0;
}