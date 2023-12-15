#include <iostream>
#include <string>
using namespace std;

class student
{
public:
        string id;
        float golch;

private:
        string name;
        int kurs;
        static int too;

public:
        student();
        student(string _name, int _kurs, string _id, float _golch);
        student(student &);
        void Copy(student &);
        bool greatThan(student &);
        bool lessThan(student &);
        bool isEqual(student &);
        bool before(student &);
        bool after(student &);
        void SetName(string a);
        void SetGolch(float a);
        void SetKurs(int a);
        void SetId(string a);
        string GetName();
        float GetGolch();
        int GetKurs();
        string GetId();
        ~student();
        static void PrintStatic();
};