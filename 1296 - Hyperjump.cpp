#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    int intensity[60001];
    int sum = 0, maxsum = 0;
    
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> intensity[i];
    for (int i = 0; i < N; i++)
    {
        sum = max(0, sum + intensity[i]);
        maxsum = max(sum, maxsum);
    }
    cout << maxsum << endl;
    
    return 0;
}