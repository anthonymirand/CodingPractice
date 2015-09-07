#include <iostream>
using namespace std;

int main()
{
    int N, sum;
    int middle = 2;
    int forces[1001];
    
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> forces[i];
    
    sum = forces[0] + forces[1] + forces[2];
    
    for (int i = 1; i + 3 < N + 1; i++)
        if (forces[i] + forces[i + 1] + forces[i + 2] > sum)
        {
            sum = forces[i] + forces[i + 1] + forces[i + 2];
            middle = i + 2;
        }
    cout << sum << " " << middle << endl;
            
    return 0;
}