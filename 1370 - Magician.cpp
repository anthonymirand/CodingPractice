#include <iostream>
using namespace std;

int main()
{
    int N, M;
    int digits[1001];
    
    cin >> N >> M;
    M %= N;
    for (int i = 0; i < N; i++)
        cin >> digits[i];
    for (int i = 0; i < 10; i++)
    {
        cout << digits[M];
        M = (M + 1) % N;
    }
    cout << endl;
    
    return 0;
}