#include <bits/stdc++.h>
#include <fstream>
#include "include/StudentClass.h"
#include "include/userHome.h"
#include "include/fileHandlers.h"
#include "include/StudentAdd.h"
using namespace std;
void takeAttendanceHeader();
string monthName(int);
void takeAttendance()
{
    if (Student.size() <= 0)
    {
        cout << "No students to take attendance!" << endl;
    }
    else
    {
        cout << "Enter Date (DD): ";
        string date;
        cin >> date;
        cout << "Enter Month (MM): ";
        string month;
        cin >> month;
        stringstream ss;
        ss << month;
        int mon;
        ss >> mon;
        if (mon < 1 || mon > 12)
        {
            system("CLS");
            takeAttendanceHeader();
            cout << "Invalid month number." << endl;
            takeAttendance();
        }
        month = monthName(mon);
        cout << "Enter Year (YYYY): ";
        string year;
        cin >> year;
        system("CLS");
        takeAttendanceHeader();
        cout << "Date: " << date + " " + month + ", " + year << endl
             << endl;
        ofstream datefile;
        string file = "Output/Attendance/" + date + "_" + month + "_" + year + ".txt";
        datefile.open(file, ios::app);
        datefile << "Date: " << date + " " + month + ", " + year << endl
                 << endl;
        cout << setw(7) << "Serial";
        cout << setw(14) << "Roll";
        cout << setw(30) << "Name";
        cout << setw(20) << "Attendance (0/1)" << endl
             << endl;
        char filename[] = "Output/Student.txt";
        int garbage = remove(filename);
        writeHeader();
        ofstream writeStudent;
        writeStudent.open(file, ios::app);
        writeStudent << setw(7) << "Serial";
        writeStudent << setw(14) << "Roll";
        writeStudent << setw(30) << "Name";
        writeStudent << setw(20) << "Attendance" << endl
                     << endl;
        for (int i = 0; i < Student.size(); i++)
        {
            cout << setw(7) << i + 1;
            cout << setw(14) << Student[i].getRoll();
            cout << setw(30) << Student[i].getName();
            cout << setw(18) << "";
            bool Attendance;
            cin >> Attendance;
            Student[i].attendance(Attendance);
            writeStudent << setw(7) << i + 1;
            writeStudent << setw(14) << Student[i].getRoll();
            writeStudent << setw(30) << Student[i].getName();
            string att = Attendance ? "Present" : "Absent";
            writeStudent << setw(20) << att << endl;
        }
        writeStudent.close();
        writeSorted();
    }
    cout << endl
         << endl;
    userHome();
}

void takeAttendanceHeader()
{
    cout << endl
         << "      ======================================" << endl
         << "      =            Take Attendance         =" << endl
         << "      ======================================" << endl
         << endl;
    cout << "                Choose your option" << endl
         << endl;
}

string monthName(int month)
{
    switch (month)
    {
    case 1:
        return "January";
    case 2:
        return "February";
    case 3:
        return "March";
    case 4:
        return "April";
    case 5:
        return "May";
    case 6:
        return "June";
    case 7:
        return "July";
    case 8:
        return "August";
    case 9:
        return "September";
    case 10:
        return "October";
    case 11:
        return "November";
    case 12:
        return "December";
    }
}