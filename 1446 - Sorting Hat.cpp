#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int N;
    string name, house;
    vector<string> houses[4];
    string names[] = {"Slytherin:", "Hufflepuff:", "Gryffindor:", "Ravenclaw:"};
    
    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; i++)
    {
        getline(cin, name);
        getline(cin, house);
        if (house[0] == 'S')
            houses[0].push_back(name);
        else if (house[0] == 'H')
            houses[1].push_back(name);
        else if (house[0] == 'G')
            houses[2].push_back(name);
        else
            houses[3].push_back(name);
    }
    for (int i = 0; i < 4; i++)
    {
        cout << names[i] << endl;
        for (int j = 0; j < houses[i].size(); j++)
            cout << houses[i][j] << endl;
        cout << endl;
    }
    
    return 0;
}