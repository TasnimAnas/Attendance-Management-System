#include <bits/stdc++.h>
using namespace std;
#include "include/StudentClass.h"
void showHeader();
void show()
{
     if (Student.size() <= 0)
     {
          cout << "No details to show!" << endl
               << endl;
     }
     else
     {
          cout << setw(7) << "Serial";
          cout << setw(14) << "Roll";
          cout << setw(30) << "Name";
          cout << setw(35) << "Attendance (Present/Total)" << endl
               << endl;
          for (int i = 0; i < ::Student.size(); i++)
          {
               cout << setw(7) << i + 1;
               cout << setw(14) << Student[i].getRoll();
               cout << setw(30) << Student[i].getName();
               cout << setw(28) << Student[i].getTotalPresentDays() << "/" << Student[i].getTotalDays() << endl;
          }
          cout << endl;
     }
}

void showHeader()
{
     cout << endl
          << "      [][][][][][][][][][][][][][][][][][][][]" << endl
          << "      []            Student Details         []" << endl
          << "      [][][][][][][][][][][][][][][][][][][][]" << endl
          << endl;
     cout << "                       Details" << endl
          << endl;
}