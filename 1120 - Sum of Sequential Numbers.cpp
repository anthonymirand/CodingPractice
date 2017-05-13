#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long unsigned N, p;
    int a = 0;
    
    cin >> N;
    
    p = (long)ceil((sqrt(8.0 * N + 1.0) - 1.0) / 2.0); // maximum possible p
    while (true)
    {
        a = N - p * (p - 1) / 2;
        if (a > 0 && a % p == 0)
            break;
        else
            p--;
    }
    
    cout << a / p << " " << p << endl;
    
    return 0;
}
