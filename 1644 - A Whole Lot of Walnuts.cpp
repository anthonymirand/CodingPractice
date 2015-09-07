#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, walnuts;
    int max_hungry = 0, min_satisfied = 10;
    char state[10];
    
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> walnuts >> state;
        if (state[0] == 's')
            min_satisfied = min(min_satisfied, walnuts);
        else if (state[0] == 'h')
            max_hungry = max(max_hungry, walnuts);
    }
    
    if (min_satisfied > max_hungry && min_satisfied != 10 && min_satisfied != 2)
        cout << min_satisfied << endl;
    else if (min_satisfied == 10)
        cout << 10 << endl;
    else
        cout << "Inconsistent" << endl;
    
    return 0;
}