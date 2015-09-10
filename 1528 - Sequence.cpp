#include <iostream>
using namespace std;

int main()
{
    int N, P;
    long long answer;
    
    while (true)
    {
        cin >> N >> P;
        
        if (N == 0 && P == 0)
            break;
        
        answer = 1;
        for (int i = 2; i <= N; i++)
            answer = (answer * i) % P;
        
        cout << answer << endl;
    }
    
    return 0;
}