#include <iostream>
using namespace std;

int main()
{
    int N;
    int size = 0;
    int lengths[50];
    
    cin >> N;
    while (N != 1)
    {
        lengths[size++] = N / 2;
        N = (N + 1) / 2;
    }
    
    cout << size << endl;
    for (int i = 0; i < size; i++)
        cout << lengths[i] << " ";
    cout << endl;
    
    return 0;
}