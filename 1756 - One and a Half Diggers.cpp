#include <iostream>
using namespace std;

int main()
{
    int diggers1, diggers2, day1, day2, total;
    int continued = 0;
    
    cin >> diggers1 >> day1 >> day2;
    diggers2 = (diggers1 * day1 + day2 - 1) / day2;
    total = diggers1 * day1;
    
    for (int i = 0; i < day2; i++)
    {
        if (continued + diggers2 <= total)
        {
            cout << diggers2 << " ";
            continued += diggers2;
        }
        else
        {
            cout << total - continued << " ";
            continued = total;
        }
        cout << endl;
    }
    
    return 0;
}