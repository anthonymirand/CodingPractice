#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    int intermediate[100000], answer[100000];
    for (int i = 0; i < 2; i++)
    {
        intermediate[i] = i;
        answer[i] = i;
    }
    for (int i = 2; i < 100000; i++)
    {
        if (i & 1)
        {
            intermediate[i] = intermediate[i / 2] + intermediate[i / 2 + 1];
            answer[i] = max(intermediate[i], answer[i - 1]);
        }
        else
        {
            intermediate[i] = intermediate[i / 2];
            answer[i] = answer[i - 1];
        }
    }
    while (true)
    {
        cin >> N;
        if (N == 0) 
            break;
        cout << answer[N] << endl;
    }
    return 0;
}