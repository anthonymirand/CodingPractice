#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    long long W, D, X1, Y1, X2, Y2, x, y, right, left, front, back;
    string collisions;
    
    while (cin >> W >> D >> X1 >> Y1 >> X2 >> Y2)
    {
        x = 0, y = 0;
        right = 1 << 30, left = 1 << 30, front = 1 << 30, back = 1 << 30;
        
        cin >> collisions;
        
        for (long long i = 0; i < collisions.size(); i++)
            switch(collisions[i])
            {
                case 'R':
                    x += 2 * (W - X2);
                    right = min(right, i);
                    break;
                case 'L':
                    x += 2 * X2;
                    left = min(left, i);
                    break;
                case 'F':
                    y += 2 * Y2;
                    front = min(front, i);
                    break;
                case 'B':
                    y += 2 * (D - Y2);
                    back = min(back, i);
                    break;
            }
        
        X2 += right < left ? x : -x;
        Y2 += back < front ? y : -y;
        
        cout << fixed << setprecision(4) << sqrt((double)((X1 - X2) * (X1 - X2) + (Y1 - Y2) * (Y1 - Y2))) << endl;
    }
    
    return 0;
}