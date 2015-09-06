#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D;
    
    cin >> A >> B >> C >> D;
    for (int i = 0; ; i++)
    {
        if (A + (B * i) >= C - (D * i))
        {
            cout << A + (B * i) << endl;
            break;
        }
        if (A + (B * (i + 1)) >= C - (D * i))
        {
            cout << C - (D * i) << endl;
            break;
        }
    }
    
    return 0;
}