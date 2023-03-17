#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin >> s;

    int len = s.length();

    for (int i = 0; i < len; i++)
    {
        if (i % 2 == 0 && s[i] != 'z')
            s[i] += 1;

        if (i % 2 == 0 && s[i] == 'z')
            s[i] -= 25;
    }

    cout << s << endl;

    return 0;
}