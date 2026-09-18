#include <iostream>
#include <cmath>

using namespace std;

int search( int list[100], int total, int goal )
{
    int result;
    // assume that goal is in lower half of list
    int low = 0;
    int high = total;
    int mid = high/2;
    bool found = false;

    while (!found) {
        cout << "current mid: " << mid << endl;
        if (goal > list[mid])
        {
            low = mid +1;
            mid = (low + high)/2;
        }
        else if (goal < list[mid])
        {
            high = mid;
            mid = (low + high)/2;
        }
        else
        {
            result = list[mid];
            found = true;
        }        
    }

    return result;
}


int main()
{                        //0  1  2  3  4   5   6   7   8   9   10  11  12  13  14  15  16  17  18  19
    int searchThis[100] = {2, 4, 6, 8, 12, 14, 18, 23, 38, 42, 47, 58, 62, 67, 72, 77, 82, 87, 96, 98};
    int goal = 8;
    int length = 20;

    cout << "BINARY SEARCH START:::" << endl << search(searchThis, length, goal) << endl;

    return 0;
}