#include <iostream>
using namespace std;

int main()
{
    int N, middle, high, K;
    int low = 1, current = 1;
    int M[101][101];
    
    cin >> N;
    high = N;
    
    while (low != high)
    {
        middle = (low + high + 1) >> 1;
        
        if (middle * (middle - 1) / 2 > N)
            high = middle - 1;
        else
            low = middle;
    }
    
    K = low;
    cout << K << endl;
    
    for (int i = 0; i < K; i++)
        for (int j = i + 1; j< K; j++)
        {
            M[i][j] = M[j][i] = current;
            current++;
        }
    
    for (int i = 0; i < K; i++)
    {
        cout << K - 1;
        for (int j = 0; j < K; j++)
            if (j != i)
                cout << " " << M[i][j];
        cout << endl;
    }
    
    return 0;
}