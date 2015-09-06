#include <iostream>
using namespace std;

int main()
{
    long long N;
    long long dots = 0;
    
    cin >> N;
    for (int i = 0; i <= N; i++)
        for (int j = i; j <= N; j++)
            dots += i + j;
    cout << dots << endl;
    
    return 0;
}