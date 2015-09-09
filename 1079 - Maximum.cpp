#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    int dynamic[100000], answer[100000];
    
    for (int i = 0; i < 2; i++)
    {
        dynamic[i] = i;
        answer[i] = i;
    }
    
    for (int i = 2; i < 100000; i++)
    {
        if (i & 1)
        {
            dynamic[i] = dynamic[i / 2] + dynamic[i / 2 + 1];
            answer[i] = max(dynamic[i], answer[i - 1]);
        }
        else
        {
            dynamic[i] = dynamic[i / 2];
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