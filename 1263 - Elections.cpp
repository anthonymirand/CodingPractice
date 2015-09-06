#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N, M, choice;
    double votes[10001];
    
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        votes[i] = 0;
    for (int i = 0; i < M; i++)
    {
        cin >> choice;
        votes[choice - 1]++;
    }
    for (int i = 0; i < N; i++)
        cout << fixed << setprecision(2) << votes[i] / M * 100 << "%" << endl;
    
    return 0;
}