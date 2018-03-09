#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    cout << ++x << endl;
    cout << x++ << endl;
    cout << x << endl;
    ++x;
    int y = x++;
    return 0;
}
