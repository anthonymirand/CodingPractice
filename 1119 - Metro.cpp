#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int check_diagonal_path(int start, int end, int diagonal[][2], int K)
{
    for (int i = 0; i < K; i++)
        if (diagonal[i][0] == start && diagonal[i][1] == end)
            return 1;
    return 0;
}

int main()
{
    int N, M, K;
    cin >> N >> M >> K;
    
    double paths[N + 1][M + 1];
    int diagonals[K][2];
    
    for (int i = 0; i <= N; i++)
        for (int j = 0; j <= M; j++)
            paths[i][j] = 0.0;
    
    for (int i = 1; i <= N; i++)
        paths[i][0] = paths[i - 1][0] + 100.0;
    for (int j = 1; j <= M; j++)
        paths[0][j] = paths[0][j - 1] + 100.0;
    for (int i = 0; i < K; i++)
        cin >> diagonals[i][0] >> diagonals[i][1];
    
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= M; j++)
        {
            if (check_diagonal_path(i, j, diagonals, K))
                paths[i][j] += min(min(paths[i - 1][j], paths[i][j - 1]) + 100.0,
                                   paths[i - 1][j - 1] + sqrt(2.0) * 100.0);
            else
                paths[i][j] += min(paths[i - 1][j], paths[i][j - 1]) + 100.0;
        }
    
    cout << int(paths[N][M] + 0.5) << endl;
    
    return 0;
}