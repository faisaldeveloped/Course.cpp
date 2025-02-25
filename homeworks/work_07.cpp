#include <iostream>
using namespace std;

int main()
{

    int num1;
    cout << "Please enter the first number A:" << endl;
    cin >> num1;

    int num2;
    cout << "Please enter the second number B:" << endl;
    cin >> num2;

    cout << num1 << " = " << num2 << " is " << (num1 == num2) << endl;
    cout << num1 << " != " << num2 << " is " << (num1 != num2) << endl;
    cout << num1 << " > " << num2 << " is " << (num1 > num2) << endl;
    cout << num1 << " < " << num2 << " is " << (num1 < num2) << endl;
    cout << num1 << " >= " << num2 << " is " << (num1 >= num2) << endl;
    cout << num1 << " <= " << num2 << " is " << (num1 <= num2) << endl;

    return 0;
}