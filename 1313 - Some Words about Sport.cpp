#include <iostream>
using namespace std;

int main()
{
    int N, value, row, col;
    int numbers[100][100];
    
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            cin >> value;
            numbers[i][j] = value;
        }
    for (int i = 0; i < 2 * N - 1; i++)
        for (int j = 0; j <= i && j < N; j++)
        {
            row = i - j;
            col = j;
            
            if (row >= 0 && row < N)
                cout << numbers[row][col] << " ";
        }
    cout << endl;
    
    return 0;
}