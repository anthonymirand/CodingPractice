#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int N, location;
    double numbers[65535];
    
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> location;
        numbers[i] = location;
    }
    for (int i = 0; i < N; i++)
    {
        if (sqrt(8 * numbers[i] - 7) == ceil(sqrt(8 * numbers[i] - 7)))
            cout << "1 ";
        else
            cout << "0 ";
    }
    cout << endl;
    
    return 0;
}