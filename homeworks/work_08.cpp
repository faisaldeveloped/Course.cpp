#include <iostream>
using namespace std;

int main()
{
    int Result;

    Result = (12 >= 12);
    cout << Result << endl; // 1

    Result = (12 > 7);
    cout << Result << endl; // 1

    Result = (8 < 6);
    cout << Result << endl; // 0

    Result = (8 == 8);
    cout << Result << endl; // 1

    Result = (12 <= 12);
    cout << Result << endl; // 1

    Result = (7 == 5);
    cout << Result << endl; // 0

    Result = !(12 >= 12);
    cout << Result << endl; // 0

    Result = !(12 < 7);
    cout << Result << endl; // 1

    Result = !(8 < 6);
    cout << Result << endl; // 1

    Result = !(8 == 8);
    cout << Result << endl; // 0

    Result = !(12 <= 12);
    cout << Result << endl; // 0

    Result = !(7 == 5);
    cout << Result << endl; // 1

    Result = (1 && 1);
    cout << Result << endl; // 1

    Result = (1 && 0);
    cout << Result << endl; // 0

    Result = (0 || 1);
    cout << Result << endl; // 1

    Result = (0 || 0);
    cout << Result << endl; // 0

    Result = !(0);
    cout << Result << endl; // 1

    Result = !(1 || 0);
    cout << Result << endl; // 0

    Result = (7 == 7) && (7 > 5);
    cout << Result << endl; // 1

    Result = (7 == 7) && (7 < 5);
    cout << Result << endl; // 0

    Result = (7 == 7) || (7 < 5);
    cout << Result << endl; // 1

    Result = (7 < 7) || (7 > 5);
    cout << Result << endl; // 1

    Result = !(7 == 7) && (7 > 5);
    cout << Result << endl; // 0

    Result = (7 == 7) && !(7 < 5);
    cout << Result << endl; // 1

    cout << "-----------------------------------------------------------------------------" << endl;

    Result = (5 > 6 && 7 == 7) || (1 || 0);
    cout << Result << endl; // True

    Result = !(5 > 6 && 7 == 7) || (1 || 0);
    cout << Result << endl; // True

    Result = !(5 > 6 || 7 == 7) && !(1 || 0);
    cout << Result << endl; // False

    Result = ((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && 1;
    cout << Result << endl; // False

    Result = ((5 > 6 && !(7 <= 8)) && (8 > 1 || 4 <= 3)) || 1;
    cout << Result << endl; // True

    return 0;
}