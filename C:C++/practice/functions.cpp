#include <iostream>

using namespace std;

void sayHi(string name, int age);

int main()
{
    cout << "Top" << endl;
    sayHi("Mike", 50);
    sayHi("Tom", 45);
    sayHi("Steve", 19);
    cout << "Bottom" << endl;

    return 0;
}

void sayHi(string name, int age)
{
    cout << "Hello " << name << ", you are " << age << endl;
}