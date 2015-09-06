#include <iostream>
using namespace std;

int main()
{
    long N;
    
    cin >> N;
    if (N <= 2)
        cout << "0" << endl;
    for (int i = 3; i < N; i++)
        if (N % i == 0)
        {
            cout << i - 1 << endl;
            return 0;
        }
    cout << N - 1 << endl;
    
    return 0;
}