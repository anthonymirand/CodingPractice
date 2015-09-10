#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    int dynamic[60001];
    
    dynamic[0] = 0;
    
    cin >> N;
    
    for (int i = 1; i <= N; i++)
    {
        dynamic[i] = i + 1;
        
        for (int j = 1; j * j <= i; j++)
            dynamic[i] = min(dynamic[i], dynamic[i - j * j] + 1);
    }
    
    cout << dynamic[N] << endl;
    
    return 0;
}