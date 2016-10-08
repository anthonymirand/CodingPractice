#include <iostream>
using namespace std;

int main()
{
    int B, R, Y, N;
    int answer = 1;
    char colors[7];
    
    cin >> B >> R >> Y >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> colors;
        if (colors[0] == 'B')
            answer *= B;
        else if (colors[0] == 'R')
            answer *= R;
        else if (colors[0] == 'Y')
            answer *= Y;
    }
    
    cout << answer << endl;
    
    return 0;
}