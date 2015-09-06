#include <iostream>
using namespace std;

int main()
{
    int answer = 0;
    char temp;

    while (cin >> temp)
        answer += temp - '0';

    if (answer % 3 == 0)
        cout << "2" << endl;
    else
        cout << "1" << endl << answer % 3 << endl;
    
    return 0;
}