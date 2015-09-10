#include <iostream>
using namespace std;

int main()
{
    long long N, payment;
    int visits;
    
    cin >> N >> visits;
    N *= 3;
    
    for (int i = 0; i < visits; i++)
    {
        cin >> payment;
        N -= payment;
        
        if (N < 0)
        {
            cout << "Free after " << i + 1 << " times." << endl;
            break;
        }
    }
    if (N >= 0)
        cout << "Team.GOV!" << endl;
    
    return 0;
}