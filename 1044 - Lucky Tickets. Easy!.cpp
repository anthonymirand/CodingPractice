#include <iostream>
using namespace std;
void solve(int N, int contain[], int number, int sum)
{
    if (number == N / 2) 
        contain[sum]++;
    else
        for(int i = 0;i < 10; i++)
            solve(N, contain, number + 1, sum + i);
}
int main()
{
    int N;
    int contain[37] = {};
    int answer = 0;
    cin >> N;
    solve(N, contain, 0, 0);
    for (int i = 0; i <= 36; i++)
        answer += contain[i] * contain[i];
    cout << answer << endl;
    return 0;
}