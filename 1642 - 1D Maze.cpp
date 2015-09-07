#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, exit, obstacle_coordinate;
    int obstacle_negative = -1000, obstacle_positive = 1000;
    
    cin >> N >> exit;
    for (int i = 0; i < N; i++)
    {
        cin >> obstacle_coordinate;
        if (obstacle_coordinate < 0)
            obstacle_negative = max(obstacle_negative, obstacle_coordinate);
        if (obstacle_coordinate > 0)
            obstacle_positive = min(obstacle_positive, obstacle_coordinate);
    }
    
    if (obstacle_negative < exit && exit < obstacle_positive)
    {
        if (exit > 0)
            cout << exit << " " << -(obstacle_negative * 2) + exit << endl;
        else
            cout << obstacle_positive * 2 - exit << " " << -exit << endl;
    }
    else
        cout << "Impossible" << endl;
    
    return 0;
}