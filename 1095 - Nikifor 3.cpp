#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    int N, length, remainder;
    int contain[10];
    string number, answer;
    
    cin >> N;
    memset(contain, 0, sizeof(contain));
    
    for (int i = 0; i < N; i++)
    {
        cin >> number;
        length = number.size();
        
        for (int j = 0; j < length; j++)
            contain[number[j] - '0']++;
        for(int j = 1; j < 5; j++)
            contain[j]--;
        
        remainder = 0;
        
        for (int j = 1; j < 10; j++)
            while (contain[j])
            {
                putchar('0' + j);
                remainder = (remainder * 10 + j) % 7;
                contain[j]--;
            }
        
        remainder = (remainder * 10000) % 7;
        remainder = (7 - remainder) % 7;
        
        if (remainder == 0)
            answer = "3241";
        else if (remainder == 1)
            answer = "1324";
        else if (remainder == 2)
            answer = "1234";
        else if (remainder == 3)
            answer = "2341";
        else if (remainder == 4)
            answer = "1243";
        else if (remainder == 5)
            answer = "1342";
        else
            answer = "2134";
        
        cout << answer;
        
        while (contain[0])
        {
            cout << '0';
            contain[0]--;
        }
        
        cout << endl;
    }
    
    return 0;
}