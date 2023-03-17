#include <bits/stdc++.h>

using namespace std;

class Cuboid
{
private:
    int l, w, h;

public:
    int getVolume()
    {
        return l * w * h;
    }
    int getSurfaceArea()
    {
        return 2 * l * w + 2 * l * h + 2 * h * w;
    }

    Cuboid()
    {
        l = 0;
        w = 0;
        h = 0;
    }
    Cuboid(int l, int w, int h)
    {
        this->l = l;
        this->w = w;
        this->h = h;
    }

    bool operator<(Cuboid c)
    {
        return getVolume() > c.getVolume();
    }
};

int main()
{

    // Cuboid c(1, 2, 3);

    // int volume = c.getVolume();
    // cout << "Area: " << volume << endl;

    vector<Cuboid> s;
    for (int i = 0; i < 5; i++)
    {
        s.push_back(Cuboid(i + 1, i + 2, i + 3));
    }

    for (int i = 0; i < 5; i++)
    {
        int volume = s[i].getVolume();
        cout << "Area: " << volume << endl;
    }
    cout << "After\n";

    sort(s.begin(), s.end());
    for (int i = 0; i < 5; i++)
    {
        int volume = s[i].getVolume();
        cout << "Area: " << volume << endl;
    }

    return 0;
}