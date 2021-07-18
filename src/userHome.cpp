#include <bits/stdc++.h>
#include "include/userHome.h"
#include "include/StudentRemove.h"
#include "include/takeAttendance.h"
#include "include/StudentAdd.h"
#include "include/pastAttendance.h"
#include "include/fileHandlers.h"
#include "include/ShowDetails.h"
using namespace std;
void userHomeHeader();
void userHome()
{
    cout << "1. Take Attendance" << endl;
    cout << "2. See past attendance details" << endl;
    cout << "3. See Student details" << endl;
    cout << "4. Add student" << endl;
    cout << "5. Remove student" << endl;
    cout << "6. Logout and quit" << endl;
    cout << "Select option: ";
    int UserHomeSelection;
    cin >> UserHomeSelection;
    switch (UserHomeSelection)
    {
    case 1:
        system("CLS");
        takeAttendanceHeader();
        takeAttendance();
        break;
    case 2:
        system("CLS");
        pastAttendanceHeader();
        pastAttendance();
        break;
    case 3:
        system("CLS");
        showHeader();
        show();
        userHome();
        break;
    case 4:
        system("CLS");
        StudentAddHeader();
        StudentAdd();
        break;
    case 5:
        system("CLS");
        StudentRemoveHeader();
        StudentRemove();
        break;
    case 6:
        system("CLS");
        exit(0);
        break;
    case -6969:
        AllReset();
        userHomeHeader();
        cout << "All Data Cleaned!" << endl
             << endl;
        userHome();
    default:
        system("CLS");
        userHomeHeader();
        cout << "Invalid selection! Try again" << endl;
        userHome();
        break;
    }
}

void userHomeHeader()
{
    cout << endl
         << "      ======================================" << endl
         << "      =             Welcome User           =" << endl
         << "      ======================================" << endl
         << endl;
    cout << "                Choose your option" << endl
         << endl;
}