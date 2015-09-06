#include <iostream>
using namespace std;

int main()
{
    int N, diamater;
    int answer = 0;
    int wheels[101];
    
    memset(wheels, 0, sizeof(wheels));
    
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> diamater;
        wheels[diamater - 600]++;
    }
    for (int i = 0; i < 101; i++)
        answer += wheels[i] / 4;
    cout << answer << endl;
    
    return 0;
}