#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double k1, k2, k3;
    
    cin >> k1 >> k2 >> k3;
    cout << round(1000 * k1 * k2 * k3 / (k1 * k2 + k2 * k3 + k1 * k3)) << endl;
    
    return 0;
}