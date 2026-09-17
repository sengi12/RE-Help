#include <iostream>
using namespace std;

// 2D Array's 
// Nested For Loops

int main()
{
    int numberGrid[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    // for (ROWS) { for (COLS) { //code } }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            cout << numberGrid[i][j] << " ";
        }
        cout << " Row " << i+1 << endl;
    }
    return 0;
}