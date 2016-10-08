#include <iostream>
using namespace std;

int main()
{
    int N, piles;
    bool daenerys_win = true;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> piles;
        if (piles / 2 % 2 == 0)
            daenerys_win = !daenerys_win;
    }

    if (daenerys_win)
        cout << "Daenerys" << endl;
    else
        cout << "Stannis" << endl;

    return 0;
}