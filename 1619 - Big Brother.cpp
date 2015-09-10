#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N, brother1, brother2;
    
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> brother1 >> brother2;
        if (brother1 < brother2)
            cout << "0" << endl;
        else
            cout << fixed << setprecision(6) << 1 - (double)brother2 / (brother1 + 1) << endl;
    }
    
    return 0;
}