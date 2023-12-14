#include <iostream>

class student
{
public:
        char *id;
        float golch;

private:
        char *name;
        int kurs;
        static int too;

public:
        student();
        student(char *_name, int _kurs, char *_id, float _golch);
        student(student &);
        void Copy(student &);
        bool greatThan(student &);
        bool lessThan(student &);
        bool isEqual(student &);
        bool before(student &);
        bool after(student &);
        void SetName(char *a);
        void SetGolch(float a);
        void SetKurs(int a);
        void SetId(char *a);
        char *GetName();
        float GetGolch();
        int GetKurs();
        char *GetId();
        ~student();
        static void PrintStatic();
};

student::student()
{
        // *id = malloc(sizeof(char) * 1024);
        // *name = malloc(sizeof(char) * 1024);
        // kurs = 1;
        // golch = 0;
}
student::student(char *_name, int _kurs, char *_id, float _golch)
{
        // this->golch = _golch;
        // this->id = _id;
        // this->kurs = _kurs;
        // this->name = _name;
}
student::~student()
{
        
}
student::student(student &t)
{
        // Copy(t);
}
void student::Copy(student &t)
{
        // this->golch = t.golch;
        // this->id = t.id;
        // this->kurs = t.kurs;
        // this->name = t.name;
}
bool student::isEqual(student &t)
{
        // return this->kurs == t.kurs;
}
bool student::lessThan(student &t)
{
        // return this->kurs < t.kurs;
}
bool student::greatThan(student &t)
{
        // return this->kurs > t.kurs;
}
bool student::after(student &t)
{
        // return strcmp(this->name, t.name);
}
bool student::after(student &t)
{
        // return strcmp(this->name, t.name);
}
void student::SetName(char *a)
{
        // this->name = a;
}
void student::SetGolch(float a)
{
        // this->golch = a;
}
void student::SetKurs(int a)
{
        // this->kurs = a;
}
void student::SetId(char *a)
{
        // this->id = a;
}
char* student::GetName()
{
        // return this->name;
}
float student::GetGolch()
{
        // return this->golch;
}
int student::GetKurs()
{
        // return this->kurs;
}
char* student::GetId()
{
        // return this->id;
}
void student::PrintStatic()
{
        // cout<<too;
}
