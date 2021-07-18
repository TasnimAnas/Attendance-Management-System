#ifndef STUDENT_CLASS_H
#define STUDENT_CLASS_H
#include <bits/stdc++.h>
using namespace std;
class StudentClass
{
private:
    string name = "Student";
    int roll = 0;

public:
    vector<bool> isPresent;
    StudentClass() {}
    StudentClass(int, string);
    void setRoll(int);
    int getRoll();
    void setName(string);
    string getName();
    void attendance(bool);
    int getTotalDays();
    int getTotalPresentDays();
    bool getAttendance(int);
    float getLast7();
    float getLast30();
};
class Total
{
private:
    int day = 0;

public:
    void newDay()
    {
        day++;
    }
    int getDay()
    {
        return day;
    }
};
extern vector<StudentClass> Student;

#endif