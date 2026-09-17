#include <iostream>

using namespace std;

// 2^3 -> 2*2*2

double cubed (double num);

int main()
{
    double input;

    cout << "Enter a Number: ";
    cin >> input;

    double answer = cubed(input);

    cout << "Your cube is : " << answer << endl;

    return 0;
}

double cubed (double num)
{
    double result = num * num * num;
    return result;
}