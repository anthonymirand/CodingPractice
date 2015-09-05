#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int K;
    int size[101];
    int answer = 0;

    cin >> K;
    for (int i = 0; i < K; i++)
        cin >> size[i];
    sort(size, size + K);
    for (int i = 0; i * 2 < K; i++)
        answer += (size[i] + 2) / 2;
    cout << answer << endl;

    return 0;
}