#include <bits/stdc++.h>

using namespace std;

int x, y, z;

int func(int a, int b)
{
    return a + b;
}

namespace Info
{
    int x = 10, y = 10, z;
    int func(int a, int b)
    {
        return a * b;
    }
}

int main()
{

    x = 5, y = 5;

    cout << x << " " << y << "\n";
    cout << Info::x << " " << Info::y << endl;

    // std::cout << func(x, y) << std::endl;
    cout << Info::func(x, y) << endl;

    return 0;
}