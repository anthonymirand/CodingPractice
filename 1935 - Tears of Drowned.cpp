#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    int N, answer;
    int skins[101];
    
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> skins[i];
    
    sort(skins, skins + N, greater<int>());
    answer = skins[0];
    
    for (int i = 0; i < N; i++)
        answer += skins[i];
    cout << answer << endl;
    
    return 0;
}