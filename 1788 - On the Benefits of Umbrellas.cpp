#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int girls, boys, temp;
    int girls_upset[101], boys_upset[101];
    int answer = -1;
    
    cin >> girls >> boys;
    for (int i = 0; i < girls; i++)
        cin >> girls_upset[i];
    for (int i = 0; i < boys; i++)
        cin >> boys_upset[i];
    
    sort(girls_upset, girls_upset + girls);
    sort(boys_upset, boys_upset + boys);
    
    for (int i = min(girls, boys); i >= 0; i--)
    {
        temp = 0;
        
        for (int j = 0; j < girls - i; j++)
            temp += girls_upset[j];
        for (int j = 0; j < boys - i; j++)
            temp += i * boys_upset[j];
            
        if (answer == -1 || temp < answer)
            answer = temp;
    }
    
    cout << answer << endl;
    
    return 0;

}