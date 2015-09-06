#include <iostream>
using namespace std;

int main()
{
    int N;
    
    cin >> N;
    if (N == 1)
        cout << "1 2 3" << endl;
    else if (N == 2)
        cout << "3 4 5" << endl;
    else
        cout << "-1" << endl;
    
    return 0;
}