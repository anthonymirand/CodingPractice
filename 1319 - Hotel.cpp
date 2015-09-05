#include <iostream>
using namespace std;

int main()
{
    int N, row, col;
    int value = 0;
    int numbers[100][100];
    
    cin >> N;
    for (int i = 0; i < 2 * N - 1; i++)
        for (int j = 0; j <= i && j < N; j++)
        {
            row = j;
            col = i - j;
            
            if (col >= 0 && col < N)
                numbers[row][col] = value++;
        }
    for (int i = 0; i < N; i++)
    {
        for (int j = N - 1; j >= 0; j--)
            cout << numbers[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    
    return 0;
}