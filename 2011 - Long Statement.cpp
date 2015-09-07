#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    int N, answer, number;
    int statement[101];
    
    cin >> N;
    for (int i = 0; i < 3; i++)
        statement[i] = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> number;
        statement[number - 1]++;
    }
    
    answer = (statement[0] > 0) + (statement[1] > 0) + (statement[2] > 0);
    if (answer == 3)
        cout << "Yes" << endl;
    else if (answer == 1)
        cout << "No" << endl;
    else
    {
        sort(statement, statement + 3, greater<int>());
        if (statement[1] >= 2 || statement[0] >= 5)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    
    return 0;
}