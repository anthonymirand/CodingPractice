#include <iostream>
using namespace std;

int getdistance(int distances[5][5], int permutations[5])
{
    int distance = 0;
    
    for (int i = 0; i < 4; i++)
        distance += distances[permutations[i] - 1][permutations[i + 1] - 1];
    
    return distance;
}

int main()
{
    int total_distance, section;
    int index = 0;
    int distances[5][5];
    int permutations[][5] = {{1, 2, 3, 4, 5},
                             {1, 4, 3, 2, 5},
                             {1, 3, 2, 4, 5},
                             {1, 3, 4, 2, 5}};
    
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> distances[i][j];
    
    total_distance = getdistance(distances, permutations[0]);
    
    for (int i = 1; i < 4; i++)
    {
        section = getdistance(distances, permutations[i]);
        if (section < total_distance)
        {
            total_distance = section;
            index = i;
        }
    }
    
    cout << total_distance << endl;
    for (int i = 0; i < 5; i++)
        cout << permutations[index][i] << " ";
    cout << endl;
    
    return 0;
}