#include <iostream>
#include <cstdio>
using namespace std;

char sums[1000001];

int main()
{
    int N, first, second;
    
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> first >> second;
        sums[i] = first + second;
    }
    for (int i = N - 1; i > 0; i--)
    {
        sums[i - 1] += sums[i] / 10;
        sums[i] %= 10;
    }
    for (int i = 0; i < N; i++)
        printf("%d", sums[i]);
    cout << endl;
    
    return 0;
}