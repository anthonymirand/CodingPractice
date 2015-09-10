#include <iostream>
using namespace std;

int main()
{
    char diamond1[5], diamond2[5];
    int index[][4] = {{0,1,2,3},{0,2,3,1},{0,3,1,2},
                      {1,0,3,2},{1,3,2,0},{1,2,0,3},
                      {2,0,1,3},{2,1,3,0},{2,3,0,1},
                      {3,0,2,1},{3,2,1,0},{3,1,0,2}};
    bool equal = false;
    
    cin >> diamond1 >> diamond2;
    for (int i = 0; i < 12 && !equal; i++)
    {
        equal = true;
        
        for (int j = 0; j < 4; j++)
            if (diamond1[j] != diamond2[index[i][j]])
                equal = false;
    }
    
    if (equal)
        cout << "equal" << endl;
    else
        cout << "different" << endl;
    
    return 0;
}