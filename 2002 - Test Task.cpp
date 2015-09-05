#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int N;
    string command,username,password;
    map<string, string> data;
    map<string, bool> logged_on;

    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> command;

        if (command == "register")
        { 
            cin >> username >> password;
            if (!data[username].empty())
                cout << "fail: user already exists" << endl;
            else
            {
                data[username] = password;
                cout << "success: new user added" << endl;
            }
 
        }
        else if (command == "login")
        {
            cin >> username >> password;
            if (data[username].empty())
                cout << "fail: no such user" << endl;
            else if (password != data[username])
                cout << "fail: incorrect password" << endl;
            else if (logged_on[username])
                cout << "fail: already logged in" << endl;
            else
            {
                logged_on[username] = true;
                cout << "success: user logged in" << endl;
            }
        }
        else if (command == "logout")
        {
            cin >> username;
            if (data[username].empty())
                cout << "fail: no such user" << endl;
            else if (!logged_on[username])
                cout << "fail: already logged out" << endl;
            else
            {
                logged_on[username] = false;
                cout << "success: user logged out" << endl;
            }
        }
    }
    
    return 0;
}