#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    int answer = 200000;
    int stones[20];
    
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> stones[i];
    for (int i = (1 << (N - 1)) - 1; i >= 0; i--)
    {
        int intermediate = 0;
        for (int j = 0; j < N; j++)
        {
            if (i & (1 << j))
                intermediate += stones[j];
            else
                intermediate -= stones[j];
        }
        answer = min(answer, abs(intermediate));
    }
    cout << answer << endl;
    
    return 0;
}