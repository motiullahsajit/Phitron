#include <bits/stdc++.h>

using namespace std;

class Person
{
public:
    string name;
    int age;
    Person *father, *mother;
    Person(string name)
    {
        this->name = name;
    }
    Person()
    {
        father = NULL;
        mother = NULL;
    }
    Person(string name, int age, string f_name, string m_name)
    {
        this->name = name;
        this->age = age;
        father = new Person;
        father->name = f_name;
        mother = new Person;
        mother->name = m_name;
    }

    void print_info()
    {
        cout << "Name: " << name << endl;
        cout << "F name: " << father->name << endl;
        cout << "M name: " << mother->name << endl;
    }
    ~Person()
    {
        cout << "Called Null\n";
        if (father != NULL)
        {
            delete father;
        }
        if (mother != NULL)
        {
            delete mother;
        }
    }
};

int main()
{
    Person p1("Sajit", 21, "Jamir", "Munny");
    p1.print_info();

    Person p2("Sajit2", 212, "Jamir2", "Munny2");
    p2.print_info();

    Person p3("P3", 32, "a", "b");
    p3.print_info();

    Person p4("Sajit4");
    p4.print_info();

    return 0;
}