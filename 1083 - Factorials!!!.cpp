#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N;
    int K = 0, answer = 1;
    string exclamation;
    cin >> N;
    cin >> exclamation;
    K = exclamation.size();
    while (N > 0)
    {
        answer *= N;
        N -= K;
    }
    cout << answer << endl;
    return 0;
}