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
        cout << "Name: " << name << " ";
        cout << "Id: " << id << " ";
        cout << "Age: " << age << "\n";
    }

    bool operator<(Student s)
    {
        return age > s.age;
    }
};

// bool comp(Student a, Student b)
// {
//     return a.id > b.id;
// }

int main()
{
    vector<Student> s;
    for (int i = 0; i < 5; i++)
    {
        s.push_back(Student("sajit", i, 21 + i));
    }

    for (int i = 0; i < 5; i++)
    {
        s[i].print_info();
    }
    cout << "After\n";
    // sort(s.begin(), s.end(), comp);
    sort(s.begin(), s.end());
    for (int i = 0; i < 5; i++)
    {
        s[i].print_info();
    }

    return 0;
}