#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int N, offset;
    double sum = 0;
    
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> offset;
        sum += abs(offset);
    }
    cout << fixed << setprecision(6) << sum / N << endl;
    
    return 0;
}