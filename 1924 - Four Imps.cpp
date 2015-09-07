#include <iostream>
using namespace std;

int main()
{
    int N;
    
    cin >> N;
    if (((N * (N + 1)) / 2) % 2 == 0)
        cout << "black" << endl;
    else
        cout << "grimy" << endl;
    
    return 0;
}