#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int N, number;
    bool list[65536];
    bool found = false;

    memset(list, false, sizeof(list));

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> number;
        list[number + 32768] = true;
    }
    
    cin >> N;    
    for (int i = 0; i < N; i++)
    {
        cin >> number;
        number = 42768 - number;
        
        if (number >= 0 && number < 65536 && list[number])
            found = true;
    }
    
    if (found)
    	cout << "YES" << endl;
    else
    	cout << "NO" << endl;
    
    return 0;
}