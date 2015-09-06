#include <iostream>
using namespace std;

int pow(int i, int N, int M)
{
    int answer = 1;
    while (N > 0)
    {
        if (N % 2 == 1)
            answer = (i * answer) % M;
        N /= 2;
        i = (i * i) % M;
    }
    return answer;
}

int main()
{
    int N, M, Y, temp;
    bool found = false;

    cin >> N >> M >> Y;
    for (int i = 0; i < M; i++)
    {
        temp = pow(i, N, M);
        if (temp % M == Y)
        {
            found = true;
            cout << i << " ";
        }
    }

    if (!found)
        cout << -1;
    cout << endl;

    return 0;
}