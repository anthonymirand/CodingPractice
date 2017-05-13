#include <iostream>
#include <string>
using namespace std;

int main()
{
    const string sandro = "Sandro";
    string manuscript;
    int cost;
    int minCost = 60;
    
    getline(cin, manuscript);
    
    for (int i = 0; i < manuscript.size() - sandro.size() + 1; i++)
    {
        cost = 0;
        for (int j = 0; j < sandro.size(); j++)
        {
            if (tolower(manuscript[i + j]) != tolower(sandro[j]))
                cost += 5;
            if (isupper(manuscript[i + j]) != isupper(sandro[j]))
                cost += 5;
        }
        
        if (cost < minCost)
            minCost = cost;
    }
    
    cout << minCost << endl;
    
    return 0;
}
