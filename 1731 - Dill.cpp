#include <iostream>
using namespace std;

int main()
{
    int N, M;
    
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
        cout << i << " ";
    cout << endl;
    
    for (int i = N + 1; i < N + M + 1; i++)
        cout << i * 100 << " ";
    cout << endl;
    
    return 0;
}