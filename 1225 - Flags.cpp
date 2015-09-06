#include <iostream>
using namespace std;

int main()
{
    int N;
    unsigned long long int fibonacci[46];
    
    cin >> N;
    for (int i = 0; i <= N; i++)
    {
        if (i == 0 || i == 1)
            fibonacci[i] = i;
        else
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
	cout << 2 * fibonacci[N] <<endl;
    
    return 0;
}