#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    int last = 0;
    int denomination[101];
    
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> denomination[i];
    
    sort(denomination, denomination + N);
    
    for (int i = 0; i < N; i++)
    {
        if (denomination[i] - last > 1)
            break;
        else
            last += denomination[i];
    }
    
    cout << last + 1 << endl;
    
    return 0;
}
