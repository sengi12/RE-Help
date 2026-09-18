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
    quiz1.insert(pair<int, int>(2, 50));
    quiz1.insert(pair<int, int>(3, 60));
    quiz1.insert(pair<int, int>(4, 20));
    quiz1.insert(pair<int, int>(5, 50));
    quiz1.insert(pair<int, int>(6, 55));
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

    // print all elements from the map quiz2 
    cout << "\nThe Map quiz2 after " 
         << "assign from quiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = quiz2.begin(); itr != quiz2.end(); itr++)
    {
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n';
    }
    cout << endl;
    
    // remove all elements with key = 4
    int num;
    num =  quiz2.erase(4);
    cout << "\nquiz2.erase(4) : "
         << num << " removed \n"
         << "\tKEY\tELEMENT\n";
    for (itr = quiz2.begin(); itr != quiz2.end(); itr++)
    {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;

    // remove all elements = 50
    int elm;
    itr = quiz2.begin();
    while( itr != quiz2.end() ) {
        if (itr->second == 50)
        {
            cout << "\n" << itr->first << " ERASED";
            itr = quiz2.erase(itr);
            elm++;
        }
        else itr++;
    }

    // shows updated map with # of removed students
    cout << "\nquiz2.erase(itr) = 50 : "
         << elm << " removed \n"
         << "\tKEY\tELEMENT\n";
    for (itr = quiz2.begin(); itr != quiz2.end(); itr++)
    {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;

    // lower bound and upper bound for map quiz1 key = 5
    cout << "quiz1.lower_bound(5) : "
         << "\tKEY = ";
    cout << quiz1.lower_bound(5)->first << '\t';
    cout << "\tELEMENT = "
         << quiz1.lower_bound(5)->second << endl;
    cout << "quiz1.upper_bound(5) : "
         << "\tKEY = "
         << quiz1.upper_bound(5)->first << '\t'
         << "\tELEMENT = "
         << quiz1.upper_bound(5)->second << endl;

    return 0;
}
