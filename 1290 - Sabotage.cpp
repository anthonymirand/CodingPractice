#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    int N;
    int numbers[25001];
    
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> numbers[i];
    
    sort(numbers, numbers + N, greater<int>());
    
    for (int i = 0; i < N; i++)
        cout << numbers[i] << endl;
    
    return 0;
}