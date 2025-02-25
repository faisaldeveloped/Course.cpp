#include <iostream>
using namespace std;

int main()
{
    /*
    * A = 10, B = 20
    * Operator           * Description                                                                                                                    * Example
        ==                Checks if the values of two operands are aqual or not, if yes then condition becomes true.                                       (A == B) is not true.
        !=                Checks if the values of two operands are equal or not, if values are not equal then condition becomes true.                      (A != B) is true.
        >                 Checks if the value of left operand is greater than the value of right operand, if yes then condition becomes true.              (A > B) is not true.
        <                 Checks if the value of left operand is less than the value of right operand, if yes then condition becomes true.                 (A < B) is true.
        >=                Checks if the value of left operand is greater than or equal to the value of right operand, if yes then condition becomes true.  (A >= B) is not true.
        <=                Checks if the value of left operand is less than or equal to the value of right operand, if yes then condition becomes true.     (A <= B) is true.
    */

    int A = 10, B = 20;

    cout << (A == B) << endl;
    cout << (A != B) << endl;
    cout << (A > B) << endl;
    cout << (A < B) << endl;
    cout << (A >= B) << endl;
    cout << (A <= B) << endl;

    return 0;
}