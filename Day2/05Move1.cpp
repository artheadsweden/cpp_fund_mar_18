#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 = "Hi there everyone";
    string s2 = move(s1);

    cout << "!" << s1 << "!" << endl;
    cout << "!" << s2 << "!" << endl;


    return 0;
}
