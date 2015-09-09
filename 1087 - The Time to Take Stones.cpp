#include <iostream>
using namespace std;

int main()
{
    int N, M;
    int stones[51];
    bool win[10001];
    
    cin >> N >> M;
    for (int i = 0; i < M; i++)
        cin >> stones[i];
    
    win[0] = true;
    for (int i = 1; i <= N; i++)
    {
        win[i] = false;
        
        for (int j = 0; j < M; j++)
            if (i >= stones[j] && !win[i - stones[j]])
                win[i] = true;
    }
    
    if (win[N])
        cout << 1 << endl;
    else
        cout << 2 << endl;
    
    return 0;
}
