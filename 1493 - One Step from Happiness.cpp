#include <iostream>
using namespace std;

bool ishappy(int N)
{
    int A = 0, B = 0;
    
    for (int i = 0; i < 3; i++)
    {
        A += N % 10;
        N /= 10;
    }
    for (int i = 0; i < 3; i++)
    {
        B += N % 10;
        N /= 10;
    }
    
    return A == B;
}

int main()
{
    int N;
    
    cin >> N;
    if (ishappy(N + 1) || ishappy(N - 1))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    return 0;
}