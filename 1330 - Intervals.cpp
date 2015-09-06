#include <iostream>
using namespace std;

int main()
{
    int N, intensity, firstpair, secondpair;
    int sum[10001];
    
    cin >> N >> sum[0];
    for (int i = 1; i < N; i++)
    {
        cin >> intensity;
        sum[i] = intensity + sum[i - 1];
    }
    
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> firstpair >> secondpair;
        if (firstpair - 1 == 0)
            cout << sum[secondpair - 1] << endl;
        else
            cout << sum[secondpair - 1] - sum[firstpair - 2] << endl;
    }
    
    return 0;
}