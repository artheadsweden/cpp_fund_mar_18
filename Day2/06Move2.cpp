#include <iostream>

using namespace std;

class MyClass
{
public:
    MyClass()
    {
        cout << "Default constructor" << endl;
    }

    MyClass(int i) : value(i)
    {
        cout << "Constructor taking one argument -> " << value << endl;
    }

    MyClass(const MyClass& other): value(other.value)
    {
        cout << "Copy constructor with value -> " << value << endl;
    }

    MyClass(MyClass&& other)
    {
        value = 0;
        swap(value, other.value);
        cout << "Move constructor with value -> " << value << endl;
    }

    MyClass& operator =(const MyClass& other)
    {
        cout << "Copy assignment operator  -> " << other.value << endl;
        return *this;
    }

    MyClass& operator =(MyClass&& other)
    {
        cout << "Move assignment operator -> " << other.value << endl;
        return *this;
    }
private:
    int value;
};


int main()
{

    return 0;
}
