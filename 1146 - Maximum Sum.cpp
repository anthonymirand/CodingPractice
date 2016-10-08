#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, answer, temp;
    int number_square[101][101], maximal_sum[101][101], dynamic[101];
    
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> number_square[i][j];
    
    for (int i = 0; i < N; i++)
        maximal_sum[i][0] = 0;
    
    for (int i = 0; i < N; i++)
        for (int j = 1; j <= N; j++)
            maximal_sum[i][j] = maximal_sum[i][j - 1] + number_square[i][j - 1];
    
    answer = number_square[0][0];
    
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            dynamic[0] = maximal_sum[0][j + 1] - maximal_sum[0][i];
            answer = max(answer, dynamic[0]);
            
            for (int k = 1; k < N; k++)
            {
                temp = maximal_sum[k][j + 1] - maximal_sum[k][i];
                dynamic[k] = temp + max(0, dynamic[k - 1]);
                answer = max(answer, dynamic[k]);
            }
        }
    }
    
    cout << answer << endl;
    
    return 0;
}