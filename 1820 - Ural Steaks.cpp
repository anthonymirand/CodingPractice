#include <iostream>
using namespace std;

int main()
{
    int steaks, steaksPan;
    
    cin >> steaks >> steaksPan;
    if (steaks <= steaksPan)
        cout << 2 << endl;
    else
        cout << (2 * steaks + steaksPan - 1) / steaksPan << endl;
    
    return 0;
}