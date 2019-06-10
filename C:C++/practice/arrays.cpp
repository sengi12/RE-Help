#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int luckyNums[20] = {4, 8, 15, 16, 23, 42};
    //   20 = length     0  1   2   3   4   5

    luckyNums[10] = 100;

    cout << luckyNums[10] << endl;

    return 0;
}