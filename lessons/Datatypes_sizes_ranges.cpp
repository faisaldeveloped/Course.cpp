#include <iostream>
using namespace std;

int main()
{
    /*
     * Ranges  / Sizes
     */
    // Type     // Meaning                 // Range                           // Size (Bytes)
    //_______________________________________________________________________________________
    // - int; // Integer                 // -2,147,483,648 | +2,147,483,647      // 4
    //_______________________________________________________________________________________
    // - float; // Floaing-Point           // 1.17549e-38 | 3.40282e+38            // 4
    //_______________________________________________________________________________________
    // - double; // Double Floating-point  // 2.22507e-308 | 1.79769e+308          // 8
    //_______________________________________________________________________________________
    // - char; // Character              // -127 | 127                          // 1
    //_______________________________________________________________________________________
    // - wchar_t; // Wide Character        // -- | --                             // 2
    //_______________________________________________________________________________________
    // - bool; // Boolean              // 0 | 1                               // 1
    //_______________________________________________________________________________________
    // - void; // Empty                // -- | --                            // 0
    //_______________________________________________________________________________________
    // - string; // String                // -- | --                            // 12

    // Type Modifiers
    /*
     * We can modify some of the fundamental data types by using type modifiers. There are 4 type modifiers in C++.
     * They are:
     * 1- signed
     * 2- unsigned
     * 3- short
     * 4- long

     * We can modify the following data types with the above modifiers:
     * 1- int
     * 2- double
     * 3- char
     */

    /*
    * Type          * Sign      * Range                                            * Size
    - short int     - signed    - -32,768        | +32,767                         - 2 bytes
    - short         - unsigned  - 0              | 65,536                          - 2 bytes
    /-----------------------------------------------------------------------------------------
    - int           - signed    - -2,147,483,648 | +2,147,483,647                  - 4 bytes
                    - unsigned  - 0              | 4,294,967295                    - 4 bytes
    /-----------------------------------------------------------------------------------------
    - long int      - signed    - -2,147,483,648 | +2,147,483,647                  - 4 bytes
    - long          - unsigned  - 0              | 4,294,967295                    - 4 bytes
    /-----------------------------------------------------------------------------------------
    - long long int - signed    - -(2^63)        | (2^63)-1                        - 8 bytes
    - long long     - unsigned  - 0              | 18,446,744,073,709,551,615      - 8 bytes
    /-----------------------------------------------------------------------------------------
    - float         - signed    - 1.17549e-38    | 3.40282e+38                     - 4 bytes
                       --          --            |   --                               --
    /-----------------------------------------------------------------------------------------
    - double       - signed     - 2.22507e-308   | 1.79769e+308                    - 8 bytes
                       --          --            |   --                               --
    /-----------------------------------------------------------------------------------------
    - long double  - signed     - 10 e-307       | 10 e+308                        - 12 bytes
                       --          --            |   --                               --
    /-----------------------------------------------------------------------------------------
    - char         - signed     - -127           | 127                             - 1 byte
                   - unsigned   - 0              | 255                             - 1 byte
    /-----------------------------------------------------------------------------------------
    - bool            --          --             |  --                             - 1 byte
    /-----------------------------------------------------------------------------------------
    - string          --          --             |  --                             - 12 bytes
    /-----------------------------------------------------------------------------------------
    - void            --         - Empty         |   --                            - 0 byte
    */

    // Note: By default everything is signed!
    /*
    *int v1;
    *signed int v2;

    *unsigned int v3;

    *short int v4;
    *short v5;

    *unsigned short int v6;
    *unsigned short v7;

    *signed long int v8;
    *long int v9;
    *long v10;

    *unsigned long v11;

    *long long int v12;
    *unsigned long long v13;

    *long double v14;

    *signed char v15;
    *char v16;

    *unsigned char v17;
    */
    /*
     double distance = 56E12; // 56E12 is equal to 56*10^12
     cout << distance << endl;

     short d = 3434233; // Error! out of range
     cout << d << endl;

     unsigned int a = -10; // Error! can only store positive number
     cout << a << endl;
     */

    /*
        cout << "The size of bool data type is: " << sizeof(bool) << "byte" << "\n";
        cout << "The size of char data type is: " << sizeof(char) << "byte" << "\n";
        cout << "The size of short data type is: " << sizeof(short int) << "byte" << "\n";
        cout << "The size of int data type is: " << sizeof(int) << "byte" << "\n";

        cout << "The size of int long data type is: " << sizeof(long) << "byte" << "\n";
        cout << "The size of int long data type is: " << sizeof(long long) << "byte" << "\n";

        cout << "The size of float data type is: " << sizeof(float) << "byte" << "\n";
        cout << "The size of double data type is: " << sizeof(double) << "byte" << "\n";
    */

    cout << "********************************************************************\n";
    cout << "char Range: (" << CHAR_MIN << ", " << CHAR_MAX << ")\n";
    cout << "unsigned char Range: (" << 0 << ", " << UCHAR_MAX << ")\n\n";

    cout << "short int Range: (" << SHRT_MIN << ", " << SHRT_MAX << ")\n";
    cout << "unsigned short int Range: (" << 0 << ", " << USHRT_MAX << ")\n\n";

    cout << "int Range: (" << INT_MIN << ", " << INT_MAX << ")\n";
    cout << "unsigned int Range: (" << 0 << ", " << UINT_MAX << ")\n";
    cout << "long int Range: (" << LONG_MIN << ", " << LONG_MAX << ")\n";
    cout << "unsigned long int Range: (" << 0 << ", " << ULONG_MAX << ")\n\n";

    cout << "long long int Range: (" << LLONG_MIN << ", " << LLONG_MAX << ")\n";
    cout << "unsigned long long int Range: (" << 0 << ", " << ULLONG_MAX << ")\n\n";

    cout << "float Range: (" << FLT_MIN << ", " << FLT_MAX << ")\n";
    cout << "float(negative) Range: (" << -FLT_MIN << ", " << -FLT_MAX << ")\n\n";

    cout << "double Range: (" << DBL_MIN << ", " << DBL_MAX << ")\n";
    cout << "double (negative) Range: (" << -DBL_MIN << ", " << -DBL_MAX << ")\n";
    cout << "long double Range: (" << LDBL_MIN_10_EXP << ", " << LDBL_MAX_10_EXP << ")\n";
    cout << "************************************************************************\n\n";

    return 0;
}