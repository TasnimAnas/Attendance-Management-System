#include <bits/stdc++.h>
using namespace std;
#include "include/StudentClass.h"
#include "include/userHome.h"
#include "include/fileHandlers.h"
void add(int, string);
void SortStudentList();
void StudentAddHeader();
void writeSorted();
void StudentAdd()
{
    int roll;
    string name;
    cout << "Enter student roll: ";
    cin >> roll;
    if (roll == -1)
    {
        system("CLS");
        userHomeHeader();
        userHome();
    }
    for (int i = 0; i < ::Student.size(); i++)
    {
        if (roll == ::Student[i].getRoll())
        {
            system("CLS");
            StudentAddHeader();
            cout << "Roll " << roll << " already exist." << endl;
            cout << "Try another..." << endl;
            StudentAdd();
        }
    }
    cout << "Enter student name: ";
    cin.ignore();
    getline(cin, name);
    if (name == "-1")
    {
        system("CLS");
        userHomeHeader();
        userHome();
    }
    add(roll, name);
    SortStudentList();
    system("CLS");
    StudentAddHeader();
    cout << roll;
    cout << setw(25) << name << endl;
    cout << "Added!" << endl
         << endl;
    writeSorted();
input:
    cout
        << "1. Add another"
        << endl;
    cout << "2. Go back" << endl;
    int StdAddSelection;
    cin >> StdAddSelection;
    if (StdAddSelection == -1)
    {
        system("CLS");
        userHomeHeader();
        userHome();
    }
    switch (StdAddSelection)
    {
    case 1:
        system("CLS");
        StudentAddHeader();
        StudentAdd();
        break;
    case 2:
        system("CLS");
        userHomeHeader();
        userHome();
        break;
    default:
        system("CLS");
        StudentAddHeader();
        cout << "Invalid selection! Try again: " << endl;
        goto input;
        break;
    }
}
void add(int roll, string name)
{
    StudentClass std;
    std.setName(name);
    std.setRoll(roll);
    ::Student.push_back(std);
}
void StudentAddHeader()
{
    cout << endl
         << "      +++++++++++++++++++++++++++++++++++++++" << endl
         << "      +              Add Student            +" << endl
         << "      +++++++++++++++++++++++++++++++++++++++" << endl
         << endl;
    cout << "                     Add Details" << endl
         << endl;
}

void SortStudentList()
{
    for (int i = 1; i < ::Student.size(); i++)
    {
        ::StudentClass temp = ::Student[i];
        int j = i - 1;
        while (temp.getRoll() < Student[j].getRoll() && j >= 0)
        {
            Student[j + 1] = Student[j];
            j--;
        }
        Student[j + 1] = temp;
    }
}

void writeSorted()
{
    char filename[] = "Output/Student.txt";
    char binfilename[] = ".Data/input.bin";
    char binfileAttendance[] = ".Data/Attendance.bin";
    int garbage = remove(filename);
    garbage = remove(binfilename);
    garbage = remove(binfileAttendance);

    writeHeader();
    for (int i = 0; i < ::Student.size(); i++)
    {
        writeSl(i + 1);
        writeRoll(Student[i].getRoll());
        writeName(Student[i].getName());
        writeAttendance(i);
    }
}