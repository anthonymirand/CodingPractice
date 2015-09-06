#include <iostream>
#include <cmath>
#include <algorithm>
#include <functional>
#include <iomanip>
using namespace std;

int main()
{
    int N;
    double sum;
    int stripie[100];
    
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> stripie[i];
    if (N == 1)
    {
        cout << stripie[0] << endl;
        return 0;
    }
    
    // sorts the array and places the values in reverse order
    sort(stripie, stripie + N, greater<int>());
    sum = 2 * sqrt((double)stripie[0] * (double)stripie[1]);
    
    for (int i = 2; i < N; i++)
        sum = 2 * sqrt(sum * stripie[i]);
    cout << fixed << setprecision(2) << sum << endl;
    
    return 0;
}