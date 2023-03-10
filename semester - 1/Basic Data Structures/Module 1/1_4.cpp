#include <bits/stdc++.h>

using namespace std;

int main()
{

    bool x = false, y = true;

    if ((x || y) && (x || y))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Sunday" << endl;
        break;
    case 2:
        cout << "Monday" << endl;
        break;
    case 3:
        cout << "Tuesday" << endl;
        break;
    default:
        cout << "Invalid day" << endl;
    }

    return 0;
}