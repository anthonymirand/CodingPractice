#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int cube_initial[4][4];
    int cube_solve[4][4][2] = {{{0,0}, {0,3}, {3,3}, {3,0}},
                               {{0,1}, {1,3}, {3,2}, {2,0}},
                               {{1,0}, {0,2}, {2,3}, {3,1}},
                               {{1,1}, {1,2}, {2,2}, {2,1}}};
    int turns[4];
    
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> cube_initial[i][j];
    
    memset(turns, 0, sizeof(turns));
    
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (cube_initial[cube_solve[i][j][0]][cube_solve[i][j][1]] == 1)
            {
                turns[(j + 1) % 4]++;
                turns[(j + 2) % 4] += 2;
                turns[(j + 3) % 4]++;
            }
    
    cout << min(min(turns[0], turns[1]), min(turns[2], turns[3])) << endl;
    
    return 0;
}