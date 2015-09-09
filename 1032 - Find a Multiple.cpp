#include <iostream>
using namespace std;

int main()
{
    int N;
    int numbers[10001], used[10001];
    int sum = 0;
    
    cin >> N;
    memset(used, -1, sizeof(used));
    used[0] = 0;
    
    for (int i = 0; i < N; i++)
        cin >> numbers[i];
    
    for (int i = 0; i < N; i++)
    {
        sum += numbers[i];
        if (used[sum % N] != -1)
        {
            cout << i - used[sum % N] + 1 << endl;
            for (int j = used[sum % N]; j <= i; j++)
                cout << numbers[j] << endl;
            break;
        }
        else
            used[sum % N] = i + 1;
    }
    
    return 0;
}
