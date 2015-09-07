#include <iostream>
using namespace std;

int main()
{
    int N, number, answer;
    int screen = 0, entered = 0;
    
    cin >> N >> screen;
    for (int i = 0; i < N; i++)
    {
        cin >> number;
        screen += number;
        cin >> number;
        entered += number;
    }
    
    answer = screen - (2 * (N + 1)) - entered;
    if (answer >= 0)
        cout << answer << endl;
    else
        cout << "Big Bang!" << endl;
    
    return 0;
}