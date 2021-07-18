#include <bits/stdc++.h>
using namespace std;
#include "include/WelcomePage.h"
#include "include/logInPage.h"
#include "include/LoginDetails.h"
#include "include/fileHandlers.h"
#include "include/userHome.h"
void logInPageHeader();
void logInPage()
{
    string Username, Password;
    cout << "Username: ";
    cin >> Username;
    if (Username == "-1")
    {
        system("CLS");
        welcomePageHeader();
        welcomePage();
    }
    cout << "Password: ";
    cin >> Password;
    if (Password == "-1")
    {
        system("CLS");
        welcomePageHeader();
        welcomePage();
    }
    if (isRightUser(Username) && isRightPassword(Password))
    {
        system("CLS");
        getInput();
        userHomeHeader();
        userHome();
    }
    else if (isRightUser(Username) && !isRightPassword(Password))
    {
        system("CLS");
        logInPageHeader();
        cout << "Incorrect Password! Try again:" << endl;
        logInPage();
    }
    else if (!isRightUser(Username))
    {
        system("CLS");
        logInPageHeader();
        cout << "Username not found! Try again:" << endl;
        logInPage();
    }
}

void logInPageHeader()
{
    cout << endl
         << "      #######################################" << endl
         << "      #              Login Page             #" << endl
         << "      #######################################" << endl
         << endl;
    cout << "                 Enter Login Details" << endl
         << endl;
}
