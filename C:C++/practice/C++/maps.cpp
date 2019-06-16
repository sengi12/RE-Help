#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main()
{
    // Empty map container initializer
    map<int, int> quiz1;

    // Insert elements in random order
    quiz1.insert(pair<int, int>(1, 40));
    quiz1.insert(pair<int, int>(2, 30));
    quiz1.insert(pair<int, int>(3, 60));
    quiz1.insert(pair<int, int>(4, 20));
    quiz1.insert(pair<int, int>(5, 50));
    quiz1.insert(pair<int, int>(6, 50));
    quiz1.insert(pair<int, int>(7, 10));

    // printing map quiz1 
    map<int, int>::iterator itr;
    cout << "\nThe Map quiz1 is: \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = quiz1.begin(); itr != quiz1.end(); itr++)
    {
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n';
    }
    cout << endl;

    // assigning the elements from quiz1 to quiz2
    map<int, int> quiz2(quiz1.begin(), quiz1.end());

    //print all elements from the map quiz2 
    cout << "\nThe Map quiz2 after " 
         << "assign from quiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = quiz2.begin(); itr != quiz2.end(); itr++)
    {
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n';
    }
    cout << endl;
    

    return 0;
}
