#include <iostream>
using namespace std;
int main()
{
    int number, value;
    int result = 0;
    cin >> number;
    value = number;
    if (number > 0)
        for (int i = 1; i != number; i++)
            result += i;
    else
        for (int i = 1; i != number; i--)
            result += i;
    cout << result + value << endl;
    return 0;
}