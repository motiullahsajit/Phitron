#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name, dob;
    int id, age;

    Student(string name, int id, int age)
    {
        this->name = name;
        this->id = id;
        this->age = age;
    }

    void print_info()
    {
        cout << name << " " << id << " " << age << " " << dob << "\n";
    }
};

int main()
{

    Student *st = new Student("Sait", 663, 21);

    st->print_info();
    (*st).print_info();

    return 0;
}