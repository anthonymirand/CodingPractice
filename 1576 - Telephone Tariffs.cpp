#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N1, C1, N2, T, C2, N3, K, minutes, seconds;
    char colon;
    int total = 0;
    
    cin >> N1 >> C1 >> N2 >> T >> C2 >> N3 >> K;
    for (int i = 0; i < K; i++)
    {
        cin >> minutes >> colon >> seconds;
        if (minutes == 0 && seconds <= 6)
            continue;
        
        total += minutes;
        if (seconds != 0)
            total++;
    }
    
    cout << "Basic:     " << N1 + C1 * total << endl;
    cout << "Combined:  " << N2 + C2 * max(0, total - T) << endl;
    cout << "Unlimited: " << N3 << endl;
    
    return 0;
}