#include <iostream>

using namespace std;

int main()
{
    // x is a lvalue, 5 is a rvalue
    // We can ask for the address of a lvalue, and not from a rvalue
    int x = 5;
    cout << &x << endl;
    return 0;
}
