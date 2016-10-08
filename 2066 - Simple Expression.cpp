#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int result_1 = 0, result_2 = 0;

    cin >> a >> b >> c;
    result_1 = a - b - c;
    result_2 = a - b * c;
    
    if (result_1 < result_2)
        cout << result_1 << endl;
    else
        cout << result_2 << endl;

    return 0;
}