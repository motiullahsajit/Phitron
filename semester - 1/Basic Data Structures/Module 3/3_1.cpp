#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name, dob;
    int id, age;
    void print_info()
    {
        cout << name << " " << id << " " << age << " " << dob << "\n";
    }
};

class Rectangle
{
public:
    int height, width;

    int area()
    {
        return height * width;
    }

    int perimeter()
    {
        return 2 * (height + width);
    }
};

class Person
{
public:
    string name;
    Person *father, *mother;

    void print_info()
    {
        cout << "Name: " << name << "\n";
        cout << "Father: " << father->name << "\n";
        cout << "Mother: " << mother->name << "\n";
    }
};

int main()
{
    // Student s;

    // s.name = "Motiullah Sajit";
    // s.dob = "22-09-02";
    // s.id = 22216663;
    // s.age = 21;
    // s.print_info();

    // Student s2;

    // s2.name = "Motiullah Sajits2";
    // s2.dob = "22-09-02s2";
    // s2.id = 663;
    // s2.age = 22;
    // s2.print_info();

    // Rectangle r1;

    // r1.width = 5;
    // r1.height = 10;

    // cout << "Area = " << r1.area() << endl;
    // cout << "Perimeter = " << r1.perimeter() << endl;

    Person p1;
    p1.father = new Person;
    p1.mother = new Person;

    p1.name = "Sajit Motiullah";
    p1.father->name = "Jamir Uddin";
    p1.mother->name = "Rasheda Khanam";

    p1.print_info();

    return 0;
}