#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main()
{
    char message[200001];
    stack<char> decrypt;
    int size = 0;
    
    cin >> message;
    size = (int)strlen(message);
    for (int i = 0; i < size; i++)
    {
        char temp;
        if (decrypt.empty())
            temp = 0;
        else
            temp = decrypt.top();
        if (temp == message[i])
            decrypt.pop();
        else
            decrypt.push(message[i]);
    }
    
    memset(message, 0, sizeof(message));
    size = (int)decrypt.size();
    
    for (int i = 0; i < size; i++)
    {
        message[size - 1 - i] = decrypt.top();
        decrypt.pop();
    }
    for (int i = 0; i < strlen(message); i++)
        cout << message[i];
    cout << endl;
    
    return 0;
}