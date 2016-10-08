#include <iostream>
using namespace std;

int main()
{
    int N;

    cin >> N;
    if (N == 1)
        cout << "16" << endl;
    else if (N == 2)
        cout << "16 06" << endl;
    else if (N == 3)
        cout << "16 06 68" << endl;
    else if (N == 4)
        cout << "16 06 68 88" << endl;
    else
        cout << "Glupenky Pierre" << endl;

    return 0;
}