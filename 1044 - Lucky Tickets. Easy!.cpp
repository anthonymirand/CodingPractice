#include <iostream>
using namespace std;

int contain[37];

void solve(int N, int number, int sum)
{
    if (number == N / 2) 
        contain[sum]++;
    else
        for(int i = 0;i < 10; i++)
            solve(N, number + 1, sum + i);
}

int main()
{
    int N;
    int answer = 0;
    
    cin >> N;
    solve(N, 0, 0);
    for (int i = 0; i <= 36; i++)
        answer += contain[i] * contain[i];
    cout << answer << endl;
    
    return 0;
}