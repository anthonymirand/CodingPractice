#include <iostream>
using namespace std;

int main()
{
    unsigned int N, M;
    
    cin >> N >> M;
    if (N > M)
        cout << 2 * (M - 1) + 1 << endl;
    else
        cout << 2 * (N - 1) << endl;

    return 0;
}