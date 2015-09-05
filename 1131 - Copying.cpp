#include <iostream>
using namespace std;

int main()
{
    int N, K;
    int i = 1, answer = 0;
    
    cin >> N >> K;
    while (i < K && i < N)
    {
        i <<= 1;
        answer++;
    }
    if (i < N)
        answer += (N - i + K - 1) / K;
    cout << answer << endl;
    
    return 0;
}