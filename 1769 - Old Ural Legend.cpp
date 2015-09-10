#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    int length, temp;
    string number;
    set<int> answer;
    
    cin >> number;
    length = number.size();
    
    for (int i = 0; i <= 6; i++)
        for (int j = 0; i + j - 1 < length; j++)
        {
            temp = 0;
            
            for (int k = 0; k < i; k++)
                temp = temp * 10 + number[j + k] - '0';
            
            answer.insert(temp);
        }
    
    for (int i = 1; i < 1000000; i++)
        if (answer.find(i) == answer.end())
        {
            cout << i << endl;
            break;
        }
    
    return 0;
}