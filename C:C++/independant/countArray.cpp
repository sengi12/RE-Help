#include <iostream>
#include <cmath>

using namespace std;

int length(int aArray[])
{
    int arg1 = sizeof(aArray[0]);
    int tot = sizeof(aArray);
    int length = (tot / arg1);
    return length;
}

int countArray(int aArray[])
{
    int len = length(aArray);
    for (int i = 0; i < len; i++)
    {

    }

    return 0;
}

int main()
{
    int argus[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int len = length(argus);

//    cout << "Pointer of argus : " << &argus[0] << endl;
//    cout << "size of pointer : " << len << endl;
//    cout << "size of array : " << tot << endl;
    cout << "size of array / size of pointer : " << len << endl;

    for (int i = 0; i < 20; i++)
    {
        printf("Element %i: %i\n", i, argus[i]);
    }

    return 0;
}