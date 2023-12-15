#include "student.h"
#include <iostream>
#include <string>
using namespace std;

int student::too = 0;

student::student()
{
    kurs = 1;
    golch = 0;
    too++;
}
student::student(string _name, int _kurs,string _id, float _golch)
{
    this->golch = _golch;
    this->id = _id;
    this->kurs = _kurs;
    this->name = _name;
    too++;
}
student::~student()
{
    too--;
}
student::student(student &t)
{
    Copy(t);
}
void student::Copy(student &t)
{
    this->golch = t.golch;
    this->id = t.id;
    this->kurs = t.kurs;
    this->name = t.name;
}
bool student::isEqual(student &t)
{
    return this->kurs == t.kurs;
}
bool student::lessThan(student &t)
{
    return this->kurs < t.kurs;
}
bool student::greatThan(student &t)
{
    return this->kurs > t.kurs;
}
bool student::after(student &t)
{
    return this->name < t.name;
}
bool student::before(student &t)
{
    return this->name < t.name;
}
void student::SetName(string a)
{
    this->name = a;
}
void student::SetGolch(float a)
{
    this->golch = a;
}
void student::SetKurs(int a)
{
    this->kurs = a;
}
void student::SetId(string a)
{
    this->id = a;
}
string student::GetName()
{
    return this->name;
}
float student::GetGolch()
{
    return this->golch;
}
int student::GetKurs()
{
    return this->kurs;
}
string student::GetId()
{
    return this->id;
}
void student::PrintStatic()
{
    cout << too;
}