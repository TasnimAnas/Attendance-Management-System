#include <bits/stdc++.h>
using namespace std;
#include "include/userHome.h"
#include "include/StudentAdd.h"
#include "include/StudentClass.h"
void StudentRemoveHeader();
void StudentRemove()
{
    cout << "Enter roll of the student to be removed: ";
    int removeRoll;
    cin >> removeRoll;
    if (removeRoll == -1)
    {
        system("CLS");
        userHomeHeader();
        userHome();
    }
    int position = -1;
    for (int i = 0; i < ::Student.size(); i++)
    {
        int stRoll = ::Student[i].getRoll();
        if (removeRoll == stRoll)
        {
            position = i;
            break;
        }
    }
    if (position != -1)
    {
        string Removedname = ::Student[position].getName();
        auto it = ::Student.begin() + position;
        ::Student.erase(it);
        cout << removeRoll << setw(25) << Removedname << endl;
        cout << "Removed!" << endl
             << endl;
        writeSorted();
    input:
        cout << "1. Remove another" << endl;
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
            StudentRemoveHeader();
            StudentRemove();
            break;
        case 2:
            system("CLS");
            userHomeHeader();
            userHome();
            break;
        default:
            system("CLS");
            StudentRemoveHeader();
            cout << "Invalid selection! Try again: " << endl;
            goto input;
            break;
        }
    }
    else
    {
        system("CLS");
        StudentRemoveHeader();
        cout << "Roll not found! Try again: " << endl;
        StudentRemove();
    }
}

void StudentRemoveHeader()
{
    cout << endl
         << "      -----------------------------------------" << endl
         << "      -              Remove Student           -" << endl
         << "      -----------------------------------------" << endl
         << endl;
    cout << "                     Remove Details" << endl
         << endl;
}