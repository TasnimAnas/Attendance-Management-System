#include <bits/stdc++.h>
#include "include/StudentClass.h"
using namespace std;
StudentClass::StudentClass(int roll, string name)
{
    this->roll = roll;
    this->name = name;
}
void StudentClass::setRoll(int rolll)
{
    this->roll = rolll;
}
int StudentClass::getRoll()
{
    return roll;
}
void StudentClass::setName(string name)
{
    this->name = name;
}
string StudentClass::getName()
{
    return name;
}
void StudentClass::attendance(bool isPresent)
{
    this->isPresent.push_back(isPresent);
}
int StudentClass::getTotalDays()
{
    return isPresent.size();
}
bool StudentClass::getAttendance(int i)
{
    return isPresent[i];
}
float StudentClass::getLast7()
{
    if (isPresent.size() < 7)
    {
        return -1;
    }
    float present = 0;
    for (int i = isPresent.size() - 7; i < isPresent.size(); i++)
    {
        if (isPresent[i] == 1)
        {
            present++;
        }
    }
    return (present / 7.0) * 100;
}
float StudentClass::getLast30()
{
    if (isPresent.size() < 30)
    {
        return -1;
    }
    float present = 0;
    for (int i = isPresent.size() - 30; i < isPresent.size(); i++)
    {
        if (isPresent[i] == 1)
        {
            present++;
        }
    }
    return (present / 30.0) * 100;
}

int StudentClass::getTotalPresentDays()
{
    int present = 0;
    for (int i = 0; i < isPresent.size(); i++)
    {
        if (isPresent[i])
        {
            present++;
        }
    }
    return present;
}

vector<StudentClass> Student;