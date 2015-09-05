#include <iostream>
using namespace std;

void inner(int N, int position)
{
    cout << "sin(" << position;
    if (position < N)
    {
        if (position & 1)
            cout << '-';
        else
            cout << '+';
        inner(N, position + 1);
    }
    cout << ')';
}

void start(int N, int position)
{
    if (position < N)
    {
        cout << '(';
        start(N, position + 1);
        cout << ')';
    }
    inner(N + 1 - position,1);
    cout << "+" << position;
}

int main()
{
    int N;
    
    cin >> N;
    start(N, 1);
    cout << endl;
    
    return 0;
}