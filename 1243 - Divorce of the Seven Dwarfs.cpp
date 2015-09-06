#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int answer = 0;
    char number[52];

    cin >> number;
    for (int i = 0; i < strlen(number); i++)
        answer = (answer * 10 + number[i] - '0') % 7;
    cout << answer << endl;

    return 0;
}