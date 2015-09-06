#include <iostream>
using namespace std;

int main()
{
    int team1, team2, rejectedruns;
    int penalty = 0;
    
    cin >> team1 >> team2;
    for (int i = 0; i < 10; i++)
    {
        cin >> rejectedruns;
        penalty += rejectedruns * 20;
    }
    if (team2 - penalty >= team1)
        cout << "No chance." << endl;
    else
        cout << "Dirty debug :(" << endl;
    
    return 0;
}