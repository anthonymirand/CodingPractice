#include <iostream>
using namespace std;

int main()
{
    int N;
    int dynamic[56];
    
    dynamic[1] = 1;
    dynamic[2] = 1;
    dynamic[3] = 2;
    
    cin >> N;
    
    for (int i = 4; i <= N; i++)
        dynamic[i] = dynamic[i - 1] + dynamic[i - 3] + 1;
    
    cout << dynamic[N] << endl;
    
    return 0;
}