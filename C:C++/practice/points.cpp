#include <iostream>
using namespace std;

/*

*/

int main()
{
    // variable / pointer instantiation
    int age = 19;
    int *pAge = &age;
    
    double gpa = 2.7;
    double *pGpa = &gpa;

    string name = "Mike";
    string *pName = &name;

    // & grabs pointer for variable
    cout << "Age pointer : " << &age << endl;
    cout << "GPA pointer : " << &gpa << endl;
    cout << "Name pointer : " << &name << endl;
    cout << endl;
    // * de-references pointer
    cout << "Age de-referenced : " << *&age << endl;

    // * de-references pointer
    cout << "GPA de-referenced : " << *pGpa << endl;
 
    // * de-references pointer, & grabs pointer
    cout << "Name de-referenced : " << *&name << endl;
    // so *&VARIABLE just prints VARIABLE

    return 0;
}