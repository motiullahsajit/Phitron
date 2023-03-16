#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int id;

public:
    void set_info(string n, int sid)
    {
        name = n;
        id = sid;
    }
    void print_info()
    {
        cout << "Name: " << name << endl
             << "Id: " << id << "\n";
    }
};

class User
{
protected:
    string name;
    int id;
};

class Admin : User
{
private:
    string role;

public:
    void set_and_print(string n, int u_id, string de)
    {
        name = n;
        id = u_id;
        role = de;

        cout << "Name: " << name << "\n";
        cout << "Id: " << id << "\n";
        cout << "Role: " << role << "\n";
    }
};

int main()
{
    // Student s;
    // s.set_info("Motiullah Sajit", 663);
    // s.print_info();

    Admin ad;
    ad.set_and_print("Sajit", 663, "Admin");

    return 0;
}