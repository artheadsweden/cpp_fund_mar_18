#include <iostream>
#include <memory>

using namespace std;

class MyClass
{
public:
    MyClass(){cout << "Constructor" << endl;}
    ~MyClass(){cout << "Destructor" << endl;}
    void Hi(){cout << "Hi" << endl;}
};

int main()
{
    MyClass* mcPtr = new MyClass();
    delete mcPtr;
    {
        unique_ptr<MyClass> uPtr(new MyClass());
    }
    cout << "After" << endl;
    shared_ptr<MyClass> sPtr1(new MyClass());
    auto sPtr2 = sPtr1;
    sPtr2->Hi();

    return 0;
}
