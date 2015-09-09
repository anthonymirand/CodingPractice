#include <iostream>
using namespace std;

int main()
{
    int N;
    
    cin >> N;
    if (N == 1)
        cout << "14" << endl;
    else if (N == 2)
        cout << "155" << endl;
    else
    {
        cout << "1575";
        for (int i = 3; i < N; i++)
            cout << "0";
        cout << endl;
    }
    
    return 0;
}
