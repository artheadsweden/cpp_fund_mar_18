#include <iostream>

using namespace std;

class MyClass
{
public:
    MyClass(int I): i(I)
    {
        cout << "Create object " << i << endl;
    }

    ~MyClass()
    {
        cout << "Delete object " << i << endl;
    }

private:
    int i;
};

int func(int n)
{
    return n + 2;
}

void func2()
{
    MyClass m1(1);
    MyClass m2(2);
}

int main()
{
    int x = 10;
    int *iPtr = new int(10);
    int *iPtr2 = iPtr;
    cout << *iPtr << endl;
    delete iPtr;
    //delete iPtr2;
    // Bad idea. iPtr2 will not point to anything useful
    cout << *iPtr2 << endl;

    int i = func(3);
    func2();
    return 0;
}
