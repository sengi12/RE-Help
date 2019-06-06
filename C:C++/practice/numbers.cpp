#include <iostream>
#include <cmath>
// add's math operations/functions

using namespace std;

int main()
{
    // modulus
    cout << "10 % 4 = " << 10 % 4 << endl;
    // performs 10 / 3... gives remainder

    int wnum = 5;
    double dnum = 5.3;

    wnum++;
    wnum+=80;

    cout << "(5++)+80 = " << wnum << endl;

    // ------------------------------
    // cmath operations

    cout << "pow(3,3) = " << pow(3, 3) << endl;

    cout << "sqrt(36) = " << sqrt(36) << endl;

    cout << "ceil(4.1) = " << ceil(4.1) << endl;

    cout << "floor(4.9) = " << floor(4.9) << endl;

    cout << "fmax(36,3) = " << fmax(36, 3) << endl;

    return 0;
}