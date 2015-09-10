#include <iostream>
using namespace std;

int main()
{
    int N;
    
    cin >> N;
    cout << 2 * N - 1 << endl;
    
    for (int i = 1; i <= N; i++)
        cout << i << " ";
    for (int i = N; i >= 2; i--)
        cout << i << " ";
    cout << endl;
    
    return 0;
}