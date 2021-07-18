#include <bits/stdc++.h>
#include "include/LoginDetails.h"
using namespace std;
string encript(string);
bool isRightUser(string Username)
{
    for (int i = 0; i < Username.size(); i++)
    {
        Username[i] = tolower(Username[i]);
    }
    string Username_ = "tasnimanas";
    if (Username == Username_)
    {
        return true;
    }
    return false;
}

bool isRightPassword(string Password)
{
    string mypassword = "323443443487279223215223231";
    Password = encript(Password);
    if (mypassword == Password)
    {
        return true;
    }
    return false;
}

string encript(string input)
{
    string password_ = "";
    for (int i = 0; i < input.size(); i++)
    {
        int chk = (int(input[i]) * 4) + 23;
        password_ = password_ + to_string(chk);
    }
    return password_;
}