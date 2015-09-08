#include <iostream>
#include <cstring>
using namespace std;

long long memo[16][2];

long long count(int N, int K, int zeros)
{
    if (zeros == 2)
        return 0;
    if (N == 1)
    {
        if (zeros == 1)
            return K - 1;
        else
            return K;
    }

    long long &retain = memo[N][zeros];
    
    if (retain == -1)
    {
        if (zeros == 1)
            retain = 0;
        else
            retain = count(N - 1, K, 1);
        retain += (K - 1) * count(N - 1, K, 0);
    }

    return retain;
}

int main()
{
    int N, K;
    long long answer;

    cin >> N >> K;
    memset(memo, -1, sizeof(memo));
    answer = (K - 1) * (int)count(N - 1, K, 0);
    cout << answer << endl;

    return 0;
}