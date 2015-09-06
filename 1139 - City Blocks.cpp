#include <iostream>
using namespace std;

int greatestcommonfactor(int N, int M)
{
    if (M == 0)
        return N;
    else
        return greatestcommonfactor(M, N % M);
}

int main()
{
    int N, M;
    
    cin >> N >> M;
    cout << N + M - 2 - greatestcommonfactor(N - 1, M - 1) << endl;
    
    return 0;
}