// #include <iostream>
// #include <fstream>

#include <bits/stdc++.h>

using namespace std;

int main()
{

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // string s;
    // // cin >> s;
    // getline(cin, s);

    // cout << s << endl;

    ofstream of;
    of.open("1.txt");

    ofstream of2;
    of2.open("2.txt");

    of << "hello world 1" << endl;
    of2 << "hello world 2" << endl;

    ifstream ifile;
    ifile.open("0.txt");

    float x, y;
    string str;

    ifile >> x >> y >> str;

    cout << setprecision(2) << fixed << x << " " << setprecision(4) << fixed << y << endl;
    cout << str << endl;

    of.close();
    of2.close();
    ifile.close();

    return 0;
}
