#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int id, age;
    Student()
    {
    }
    Student(string name, int id, int age)
    {
        this->name = name;
        this->id = id;
        this->age = age;
    }

    void print_info()
    {
        cout << "Name: " << name << "\n";
        cout << "Id: " << id << "\n";
        cout << "Age: " << age << "\n";
    }
};

int main()
{
    Student s[5];

    for (int i = 0; i < 5; i++)
    {
        s[i] = Student("sajit", i, 21 + i);
    }

    for (int i = 0; i < 5; i++)
    {
        s[i].print_info();
    }
    return 0;
}