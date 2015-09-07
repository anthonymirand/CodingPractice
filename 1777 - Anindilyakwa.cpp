#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    long long int x1, x2, x3;
    long long int smallest = 1000000000000000001;
    int answer = 0;
    vector<long long> stones;
    
    cin >> x1 >> x2 >> x3;
    stones.push_back(x1);
    stones.push_back(x2);
    stones.push_back(x3);
    
    while (smallest)
    {
        sort(stones.begin(), stones.end(), greater<long long>());
        answer++;
        
        for (int i = 0; i < stones.size() - 1; i++)
            smallest = min(smallest, stones[i] - stones[i + 1]);
        stones.push_back(smallest);
    }
    cout << answer << endl;
    
    return 0;
}