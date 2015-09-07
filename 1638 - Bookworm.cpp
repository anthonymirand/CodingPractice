#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int thickness_volume, thickness_cover, start, end;
    
    cin >> thickness_volume >> thickness_cover >> start >> end;
    cout << abs(((end - start) * (2 * thickness_cover + thickness_volume)) - thickness_volume) << endl;
    
    return 0;
}