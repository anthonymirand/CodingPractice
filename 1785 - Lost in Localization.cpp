#include <iostream>
using namespace std;

int main()
{
    int N;
    
    cin >> N;
    if (N < 5)
        cout << "few" << endl;
    else if (N < 10)
        cout << "several" << endl;
    else if (N < 20)
        cout << "pack" << endl;
    else if (N < 50)
        cout << "lots" << endl;
    else if (N < 100)
        cout << "horde" << endl;
    else if (N < 250)
        cout << "throng" << endl;
    else if (N < 500)
        cout << "swarm" << endl;
    else if (N < 1000)
        cout << "zounds" << endl;
    else
        cout << "legion" << endl;
    
    return 0;
}