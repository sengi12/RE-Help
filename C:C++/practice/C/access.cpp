#include <iostream>

using namespace std;

class one{
    // by default everything is private
    // PRIVATE can only be accessed within the initialized curly braces {}
    private:
        int a;

    // PUBLIC can be accessed ANYWHERE!
    public:
        int b;

    // PROTECTED is the same as PRIVATE except that PROTECTED variables can be inherited
    protected:
        int c;
    
};

class two : public one
{
    public:
        void show()
        {
            cout << c;
        }
};

int main()
{
    one object;
    object.b = 12;
}