#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    int N;
    int position = 1, steps = 0;
    string name;
    map<char, int> mailbox;
    mailbox['A'] = 1;
    mailbox['P'] = 1;
    mailbox['O'] = 1;
    mailbox['R'] = 1;
    mailbox['B'] = 2;
    mailbox['M'] = 2;
    mailbox['S'] = 2;
    mailbox['D'] = 3;
    mailbox['G'] = 3;
    mailbox['J'] = 3;
    mailbox['K'] = 3;
    mailbox['T'] = 3;
    mailbox['W'] = 3;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> name;
        if (position - mailbox[name[0]] < 0)
            steps += mailbox[name[0]] - position;
        else
            steps += position - mailbox[name[0]];
        position = mailbox[name[0]];
    }
    cout << steps << endl;;
    return 0;
}