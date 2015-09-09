#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int N, index;
    int size = 1;
    int answer[15000];
    bool isPrime[164000];
    
    answer[0] = 2;
    isPrime[0] = false;
    isPrime[1] = false;
    
    cin >> N;
    memset(isPrime, true, sizeof(isPrime));
    
    for (int i = 3; i < 164000 && size < 15000; i += 2)
    {
        if (isPrime[i])
        {
            answer[size] = i;
            size++;
            if (i < 164000 / i)
                for(int j = i * i; j < 164000; j += i)
                    isPrime[j] = false;
        }
    }
    while (N--)
    {
        cin >> index;
        cout << answer[index - 1] << endl;
    }
    
    return 0;
}