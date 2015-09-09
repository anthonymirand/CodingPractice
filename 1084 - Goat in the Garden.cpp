#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double const PI = acos(-1.0);

double hungrygoat(int side, int rope)
{
    if (2 * rope * rope >= side * side)
        return side * side;
    else if (2 * rope <= side)
        return PI * rope * rope;
    return side * sqrt(4.0 * rope * rope - side * side) + (PI - 4.0 * acos(side / 2.0 / rope)) * rope * rope;
}

int main()
{
    int side, rope;
    
    cin >> side >> rope;
    cout << fixed << setprecision(3) << hungrygoat(side, rope) << endl;
    
    return 0;
}
