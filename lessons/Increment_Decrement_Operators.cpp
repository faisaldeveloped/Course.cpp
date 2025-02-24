#include <iostream>
using namespace std;

int main()
{
    // int A = 10, B = 20;

    // A++;
    // B--;

    //++A;
    //--B;

    // cout << "A = " << A << endl;
    // cout << "B = " << B << endl;

    // Prefix vs Postfix -- / ++
    // A = 10
    /*
    * Operator * Example                    * Result
        A++     C = A++                     C will take 10, then A will increase by 1 and become 11
        ++A     C = ++A                     A will increase by 1 and become 11, them C will take 11
        A--     C = A--                     C will take 10, then A will decrease by 1 and become 9
        --A     C = --A                     A will increase by 1 and become 9, then C will take 9
    */

    // int A = 10;
    // int B = A++; // B will take the old value of A, then A will increase by 1

    // cout << "B = " << B << endl;
    // cout << "A = " << A << endl;

    //    B = ++A; // A will increase by 1, then B will take the new value

    // cout << "B = " << B << endl;
    // cout << "A = " << A << endl;

    int F = 10;
    int C = F--;

    cout << "C: " << C << endl;
    cout << "F: " << F << endl;

    C = --F;

    cout << "C: " << C << endl;
    cout << "F: " << F << endl;

    return 0;
}