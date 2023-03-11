#include <bits/stdc++.h>

using namespace std;

void erase(string &s)
{
    s.erase(s.begin());
    s.pop_back();
}

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{

    string s;
    cin >> s;
    erase(s);
    cout << s << endl;

    int a, b;

    cin >> a >> b;

    swap(a, b);

    cout << a << " " << b << endl;

    return 0;
}