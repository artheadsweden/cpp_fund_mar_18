#include <iostream>

using namespace std;

void func1(int &x)
{
    cout << "x is lvalue ref" << endl;
}

void func1(int &&x)
{
    cout << "x is rvalue ref" << endl;
}

int main()
{
    int n = 10;
    func1(move(n));
    cout << n << endl;
    func1(3);
    // ...
    return 0;
}
