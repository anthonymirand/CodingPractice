#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    int answer = 1;
    long long numbers[100001];
    
    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> numbers[i];
    
    for (int i = 2; i + 1 <= N; i++)
        if (abs(numbers[i + 1] - numbers[i]) > abs(numbers[answer + 1] - numbers[answer]))
            answer = i;
    
    cout << answer << " " << answer + 1 << endl;
    
    return 0;
}
