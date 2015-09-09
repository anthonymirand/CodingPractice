#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int interval_length;
    int array_element = 0;
    int magnetic[25001], done[100001];
    priority_queue<int> interval;
    
    cin >> interval_length;
    memset(done, 0, sizeof(done));
    
    while (true)
    {
        cin >> magnetic[array_element];
        if (magnetic[array_element] == -1)
            break;
        array_element++;
    }
    
    for (int i = 0; i < interval_length; i++)
        interval.push(magnetic[i]);
    cout << interval.top() << endl;
    array_element -= interval_length;
    
    for (int i = 0; i < array_element; i++)
    {
        interval.push(magnetic[interval_length + i]);
        done[magnetic[i]]++;
        
        while (done[interval.top()])
        {
            done[interval.top()]--;
            interval.pop();
        }
        
        cout << interval.top() << endl;
    }
        
    return 0;
}