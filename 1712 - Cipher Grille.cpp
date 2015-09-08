#include <iostream>
#include <string>
using namespace std;

int main()
{
    char grille[4][5], rotation[4][5], password[4][5];
    string answer;
    
    for (int i = 0; i < 4; i++)
        cin >> grille[i];
    for (int i = 0;i < 4; i++)
        cin >> password[i];
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            for (int k = 0; k < 4; k++)
                if (grille[j][k] == 'X')
                    answer += password[j][k];
        
        for (int j = 0; j < 4; j++)
            for (int k = 0; k < 4; k++)
                rotation[k][3 - j] = grille[j][k];
        
        for (int j = 0; j < 4; j++)
            for (int k = 0; k < 4; k++)
                grille[j][k] = rotation[j][k];
    }
    cout << answer.c_str() << endl;
    
    return 0;
}
