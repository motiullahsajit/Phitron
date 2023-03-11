#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, s1, s2;

    s = "I love bhat,";
    s1 = "I love me.";

    cout << s + " " + s1 << endl;

    cout << s.size() << endl;

    s2 = "I am happy.";
    string s3 = s1 + s2;
    cout << s3 << endl;

    string s4 = "ABCDEF";

    for (int i = 0; i < s4.size(); i++)
        s4[i] += 1;

    cout << s4 << endl;

    s4.erase(s4.begin() + 0);

    cout << s4 << endl;

    string s5 = "abcdef";

    s5.erase(s5.begin() + s5.size() - 1);
    s5.pop_back();
    cout << s5 << endl;

    return 0;
}