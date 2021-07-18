#include <bits/stdc++.h>
using namespace std;
#include "include/userHome.h"
#include "include/StudentClass.h"

void pastAttendanceHeader();
void pastAttendance()
{
     int roll;
     cout << "Enter roll to check details: ";
     cin >> roll;
     if (roll == -1)
     {
          system("CLS");
          userHomeHeader();
          userHome();
     }
     int position = -1;
     for (int i = 0; i < ::Student.size(); i++)
     {
          int stRoll = ::Student[i].getRoll();
          if (roll == stRoll)
          {
               position = i;
               break;
          }
     }
     if (position != -1)
     {
          cout << endl;
          cout << setw(21) << "Total Class Days: " << setw(10) << Student[position].getTotalDays() << endl;
          cout << setw(21) << "Total Present Days: " << setw(10) << Student[position].getTotalPresentDays() << endl;
          cout << fixed;
          cout << setprecision(2);
          cout << setw(21) << "Parcentage: " << setw(9) << (float(Student[position].getTotalPresentDays()) / (Student[position].getTotalDays())) * 100 << "%" << endl;
          if (Student[position].isPresent.size() < 7)
          {
               cout << setw(21) << "Last 7 Days: " << setw(10) << "N/A" << endl;
          }
          else
          {
               cout << setw(21) << "Last 7 Days: " << setw(9) << Student[position].getLast7() << "%" << endl;
          }
          if (Student[position].isPresent.size() < 30)
          {
               cout << setw(21) << "Last 30 Days: " << setw(10) << "N/A" << endl;
          }
          else
          {
               cout << setw(21) << "Last 30 Days: " << setw(9) << Student[position].getLast30() << "%" << endl;
          }

     input:
          cout << "1. Check another" << endl;
          cout << "2. Go back" << endl;
          int StdRemoveSelection;
          cin >> StdRemoveSelection;
          if (StdRemoveSelection == -1)
          {
               system("CLS");
               userHomeHeader();
               userHome();
          }
          switch (StdRemoveSelection)
          {
          case 1:
               system("CLS");
               pastAttendanceHeader();
               pastAttendance();
               break;
          case 2:
               system("CLS");
               userHomeHeader();
               userHome();
               break;
          default:
               system("CLS");
               pastAttendanceHeader();
               cout << "Invalid selection! Try again: " << endl;
               goto input;
               break;
          }
     }
     else
     {
          system("CLS");
          pastAttendanceHeader();
          cout << "Roll not found! Try again: " << endl
               << endl;
          pastAttendance();
     }
}

void pastAttendanceHeader()
{
     cout << endl
          << "      %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
          << "      %            Past Attendance          %" << endl
          << "      %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
          << endl;
     cout << "                Choose your option" << endl
          << endl;
}