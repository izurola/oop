#include "student.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    student arr[100];
    int totalStudent = 0;
    string line;
    ifstream fin("input.txt");
    if (!fin.is_open())
    {
        cout << "file oldsonguiu" << endl;
        return 0;
    }
    while (getline(fin, line))
    {
        istringstream iss(line);
        string name, id;
        float golch;
        int kurs;
        if (iss >> name >> id >> golch >> kurs)
        {
            arr[totalStudent++] = student(name, kurs, id, golch);
        }
    }
    fin.close();

    for (int i = 0; i < totalStudent - 1; ++i)
    {
        int minIndex = i;
        for (int j = i + 1; j < totalStudent; ++j)
        {
            if (arr[j].after(arr[minIndex]))
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            student temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
    ofstream fout("nereerSort.txt");
    if (fout.is_open())
    {
        for (int i = 0; i < totalStudent; ++i)
        {
            fout <<arr[i].GetName() << " " << arr[i].GetId()<< " " << arr[i].GetGolch() << " " << arr[i].GetKurs() << endl;
        }
        fout.close();
    }
    else
    {
        return 0;
    }

    for (int i = 0; i < totalStudent - 1; ++i)
    {
        int maxIndex = i;
        for (int j = i + 1; j < totalStudent; ++j)
        {
            if (arr[j].lessThan(arr[maxIndex]))
            {
                maxIndex = j;
            }
        }
        if (maxIndex != i)
        {
            student temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }
    ofstream fout1("kurseerSort.txt");
    if (fout1.is_open())
    {
        for (int i = 0; i < totalStudent; ++i)
        {
            fout1 <<arr[i].GetName() << " " << arr[i].GetId()<< " " << arr[i].GetGolch() << " " << arr[i].GetKurs() << endl;
        }
        fout1.close();
    }
    else
    {
        return 0;
    }
    arr[0].PrintStatic();
}