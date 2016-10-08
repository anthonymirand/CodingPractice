#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    int id[16], chosen[16];
    string words[16][3];
    bool found = true;
    
    cin >> N;
    chosen[0] = 0;
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> words[i][j];
        sort(words[i], words[i] + 3);
    }
    
    for (int i = 0; i < N; i++)
    {
        cin >> id[i];
        id[i]--;
    }
    
    for (int i = 1; i < N; i++)
    {
        found = false;
        
        for (int j = 0; j < 3; j++)
            if (words[id[i]][j] > words[id[i - 1]][chosen[i - 1]])
            {
                chosen[i] = j;
                found = true;
                break;
            }
        
        if (!found)
            break;
    }
    
    if (!found)
        cout << "IMPOSSIBLE" << endl;
    else
        for (int i = 0; i < N; i++)
            cout << words[id[i]][chosen[i]] << endl;
    
    return 0;
}