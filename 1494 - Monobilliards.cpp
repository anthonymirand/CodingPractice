#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int N;
    int takenout[100001], order[100001];
    int position1 = 0, position2 = 0, size = 0;
    bool success = true;
    
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> takenout[i];
    
    while (success && position1 < N)
    {
        if (size > 0 && order[size - 1] == takenout[position1])
        {
            size--;
            position1++;
        }
        else if (position2 < N)
        {
            position2++;
            order[size] = position2;
            size++;
        }
        else
            success = false;
    }
    
    if (success)
        cout << "Not a proof" << endl;
    else
        cout << "Cheater" << endl;
    
    return 0;
}