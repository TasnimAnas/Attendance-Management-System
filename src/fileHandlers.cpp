#include <bits/stdc++.h>
#include <fstream>
#include "include/StudentClass.h"
#include "include/StudentAdd.h"
using namespace std;

void writeHeader()
{
    ofstream writeStudent;
    writeStudent.open("Output/Student.txt", ios::app);
    writeStudent << setw(7) << "Serial";
    writeStudent << setw(14) << "Roll";
    writeStudent << setw(30) << "Name";
    writeStudent << setw(35) << "Attendance (Present/Total)" << endl
                 << endl;
    writeStudent.close();
}

void writeSl(int sl)
{
    ofstream writeStudent;
    writeStudent.open("Output/Student.txt", ios::app);
    writeStudent << setw(7) << sl;
    writeStudent.close();
}

void writeRoll(int roll)
{
    ofstream writeStudent;
    writeStudent.open("Output/Student.txt", ios::app);
    writeStudent << setw(14) << roll;
    writeStudent.close();

    ofstream writeStudentbin;
    writeStudentbin.open(".Data/input.bin", ios::app);
    writeStudentbin << roll << endl;
    writeStudentbin.close();
}

void writeName(string name)
{
    ofstream writeStudent;
    writeStudent.open("Output/Student.txt", ios::app);
    writeStudent << setw(30) << name;
    writeStudent.close();

    ofstream writeStudentbin;
    writeStudentbin.open(".Data/input.bin", ios::app);
    writeStudentbin << name << endl;
    writeStudentbin.close();
}

void writeAttendance(int i)
{
    ofstream writeStudent;
    writeStudent.open("Output/Student.txt", ios::app);
    writeStudent << setw(21) << Student[i].getTotalPresentDays() << "/" << Student[i].getTotalDays();
    cout << fixed;
    cout << setprecision(2);
    string parcent = to_string((float(Student[i].getTotalPresentDays()) / (Student[i].getTotalDays())) * 100);
    writeStudent << " (" << parcent[0] << parcent[1] << parcent[2] << parcent[3] << parcent[4] << "%)" << endl;
    writeStudent.close();

    ofstream writeStudentbin;
    writeStudentbin.open(".Data/Attendance.bin", ios::app);
    for (int j = 0; j < Student[i].isPresent.size(); j++)
    {
        writeStudentbin << Student[i].isPresent[j] << " ";
    }
    writeStudentbin << endl;

    writeStudentbin.close();
}

void getInput()
{
    string input;
    int chk = 1;
    int chk2 = 0;
    ifstream inputtudent(".Data/input.bin");
    while (getline(inputtudent, input))
    {
        string name;
        int roll;
        if (chk % 2 == 0)
        {
            name = input;
            chk2++;
            chk++;
        }
        else
        {
            stringstream ss;
            ss << input;
            ss >> roll;
            chk2++;
            chk++;
        }
        if (chk2 == 2)
        {
            add(roll, name);
            chk2 = 0;
        }
    }

    ifstream inputAttendance(".Data/Attendance.bin");
    int k = 0;
    while (getline(inputAttendance, input))
    {
        for (int i = 0; i < input.size(); i++)
        {
            if (input[i] == '0')
            {
                Student[k].isPresent.push_back(false);
            }
            else if (input[i] == '1')
            {
                Student[k].isPresent.push_back(true);
            }
        }
        k++;
    }
}

void AllReset()
{
    char filename[] = "Output/Student.txt";
    char binfilename[] = ".Data/input.bin";
    char binfileAttendance[] = ".Data/Attendance.bin";
    int garbage = remove(filename);
    garbage = remove(binfilename);
    garbage = remove(binfileAttendance);
    for (int i = 0; i < Student.size(); i++)
    {
        Student.pop_back();
    }
}