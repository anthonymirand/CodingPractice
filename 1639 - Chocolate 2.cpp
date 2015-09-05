#include <iostream>
using namespace std;
int main()
{
    int M, N;
    cin >> M >> N;
    if (M % 2 == 1 && N % 2 == 1)
        cout << "[second]=:]" << endl;
    else
        cout << "[:=[first]" << endl;
    return 0;
}