#include <iostream>
#include <algorithm>
using namespace std;

// declared globally to avoid stack overflow
long long dynamic[501];

int main()
{
    int N;
    int maxposition = 0, sum;
    dynamic[0] = 1;
    
    for (int i = 1; i < 501; i++)
        for (int j = maxposition; j > -1; j--)
        {
            sum = i + j;
            if (sum < 501)
            {
                dynamic[sum] += dynamic[j];
                maxposition = max(maxposition, sum);
            }
        }
    
    cin >> N;
    cout << dynamic[N] - 1 << endl;
    
    return 0;
}