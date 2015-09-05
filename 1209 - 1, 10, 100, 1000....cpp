// logic behind summation/value design:
    // 110100100010000100000100000010000000...
    // 1 at locations: 1, 2, 4, 7, 11, 16, 22, ...
    // 		(1 + 0), (1 + 1), (1 + (1 + 2)), (1 + (1 + 2 + 3)), ...
    // 		1 + (sum of n digits)
    // 		1 + n * (n + 1) / 2
    // 		1 + n * (n + 1) /2 = p
    // 		2 + n^2 + n = 2p
    // 		n^2 + n = 2(p - 1)
    // 		n^2 + n - 2(p - 1) = 0
    // 		-1 + -sqrt(8p - 7) / 2
    // if 8p - 7 is a perfect square then the value at position p will be a 1
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