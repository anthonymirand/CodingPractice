#include <iostream>
using namespace std;

int main()
{
    int A, B;
    int answer = 0;
    
    cin >> A >> B;
    for (int i = A; i <= B; i++)
        if (i % 2 != 0)
            answer++;
    cout << answer << endl;
    
    return 0;
}