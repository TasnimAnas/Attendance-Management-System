#include <bits/stdc++.h>
#include "include/logInPage.h"
using namespace std;

void welcomePageHeader();
void welcomePage()
{
    cout << "Select option (1,2): ";
    int welcomePageSelection;
    cin >> welcomePageSelection;
    if (welcomePageSelection == 1)
    {
        system("CLS");
        logInPageHeader();
        logInPage();
    }
    else if (welcomePageSelection == 2)
    {
    }
    else
    {
        system("CLS");
        welcomePageHeader();
        cout << "Invalid selection! ";
        welcomePage();
    }
}
void welcomePageHeader()
{
    cout << endl
         << "      ****************************************" << endl
         << "      *      Welcome to EASY ATTENDANCE!     *" << endl
         << "      ****************************************" << endl
         << endl;
    cout << "                    Welcome Page" << endl
         << endl;
    cout << "1. Login" << endl;
    cout << "2. Exit" << endl;
}