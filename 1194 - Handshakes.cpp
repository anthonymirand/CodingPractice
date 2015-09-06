#include <iostream>
using namespace std;

int main()
{
    int N, K;

    cin >> N >> K;
    cout << (N * (N - 1) / 2) - K << endl;

    return 0;
}