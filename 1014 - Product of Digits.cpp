#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    bool valid = true;
    string answer;
    
    cin >> N;
    if (N == 0)
        cout << "10" << endl;
    else if (N == 1)
        cout << "1" << endl;
    else
    {
        while (valid && N != 1)
        {
            valid = false;
            for (int i = 9; i > 1; i--)
            {
                if (N % i == 0)
                {
                    valid = true;
                    answer += (char)('0' + i);
                    N /= i;
                    break;
                }
            }
        }
        reverse(answer.begin(), answer.end());
        if (!valid)
            cout << "-1" << endl;
        else
            cout << answer << endl;
    }
    
    return 0;
}