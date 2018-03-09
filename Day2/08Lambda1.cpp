#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n = 10;
    int i = 32;
    //auto f = [&i,=](int x){cout << x * n << endl;};


    vector<int> v {23, 44, 46, 47, 3, 45, 22, 13};
    auto sum = 0;
  //  auto theSum = [&sum](int x){sum += x;};

    for_each(begin(v), end(v), [&sum](int x){sum += x;});
    cout << sum << endl;

    [](){cout << "hi" << endl;}();

    auto f = [](int p){
        return [&](int b)
        {return p * b;};
    };
    auto a = f(2);
    cout << a(3) <<endl;
    cout << a(4) << endl;
    return 0;
}
