#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // this can be exchanged with data type int, char with no errors 
    double age;

    //cout << "Enter your age: ";
    //cin >> age;

    //cout << "You are " << age << " years old." << endl;

    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello " << name << ", how are you doing?" << endl;

    return 0;
}