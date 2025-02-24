#include <iostream>
using namespace std;

int main()
{

    /*
    * A = 10 , B = 20

    * Operator   * Example                  * Equivalent to
         =          A = 5                       A = 5
         +=         A += B                      A = A + B
         -=         A -= B                      A = A - B
         *=         A *= B                      A = A * B
         /=         A /= B                      A = A / B
         %=         A %= B                      A = A % B
    */

    int A = 10, B = 20;

    A += B; // A = A + B
    cout << "A = " << A << endl;

    A -= B; // A = A - B
    cout << "A = " << A << endl;

    A *= B; // A = A * B
    cout << "A = " << A << endl;

    A /= B; // A = A / B
    cout << "A = " << A << endl;

    A %= B; // A = A % B
    cout << "A = " << A << endl;

    return 0;
}