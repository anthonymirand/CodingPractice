#include <iostream>
using namespace std;

int main()
{
    int shot1, shot2, total;
    
    cin >> shot1 >> shot2;
    total = shot1 + shot2 - 1;
    cout << total - shot1 << " " << total - shot2 << endl;
    
    return 0;
}