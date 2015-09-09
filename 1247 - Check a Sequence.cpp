#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int S, N, number;
    int minimum = 0, sum = 0;
    bool adds_up = true;
    
    cin >> S >> N;
    for (int i = 1; i <= S; i++)
    {
        cin >> number;
        sum += number;
        
        if (sum - i - minimum > N)
            adds_up = false;
        
        minimum = min(minimum, sum - i);
    }
    
    if (adds_up)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}
