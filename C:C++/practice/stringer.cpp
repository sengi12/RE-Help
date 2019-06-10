#include <iostream>

using namespace std;

int main()
{
    string phrase = "Giraffe Academy";
    //               0123456789..... index

    // length()
    int len = phrase.length();

    // indexing strings
    char G = phrase[0];

    // find help:
    int index = phrase.find("Academy", 0);
    // 0 = if Academy exists, gives index

    int index1 = phrase.find("ffe", 8);
    // 3 = if ffe exists after index 3. IF NOT, then it returns -1

    // substr
    string sub = phrase.substr(11, 3);
    // parameters: substr(starting index, # of char's)

    cout << sub << endl;

    return 0;
}