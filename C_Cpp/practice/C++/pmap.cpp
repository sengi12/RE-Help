#include <iostream>
#include <map>
#include <iterator>
#include <string>

using namespace std;

int main(){
    map<string, int> grades;

    // fill up the map grades
    grades.insert(pair<string, int>("Mike", 88));
    grades.insert(pair<string, int>("Sarah", 96));
    grades.insert(pair<string, int>("Abbey", 72));
    grades.insert(pair<string, int>("Josh", 56));
    grades.insert(pair<string, int>("Alex", 59));

    // instantiate an iterator
    map<string, int>::iterator itr;

    // print class grades
    cout << "Grades for the entire class: \n"
         << "\tName\t\tGrade";
    for (itr = grades.begin(); itr != grades.end(); itr++)
    {
        cout << "\n\t" << itr->first << "\t\t" << itr->second;
    }
    cout << endl;

    // remove failing students
    itr = grades.begin();
    while (itr != grades.end())
    {
        if (itr->second < 60)
        {
            cout << "\n" << itr->first << " has been kicked from the class.";
            itr = grades.erase(itr);
        }
        else itr++;
    }
    cout << endl;

    // print new class grades
    cout << "Grades for the entire class: \n"
         << "\tName\t\tGrade";
    for (itr = grades.begin(); itr != grades.end(); itr++)
    {
        cout << "\n\t" << itr->first << "\t\t" << itr->second;
    }
    cout << endl;

    return 0;
}