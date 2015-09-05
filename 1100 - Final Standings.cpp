#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool pair_compare (const pair<int, int>& first_element, const pair<int, int>& second_element)
{
    return first_element.second > second_element.second;
}

int main()
{
    int N, id, score;
    vector<pair<int, int>> team;
    
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> id >> score;
        team.push_back(make_pair (id, score));
    }
    
    stable_sort(team.begin(), team.end(), pair_compare);
    // stable_sort implementing a lambda function:
    // stable_sort(team.begin(), team.end(), 
    //  	     	[] (const pair<int, int>& first_element, const pair<int, int>& second_element)
    //              { return first_element.second > second_element.second; } );
    
    for (vector<pair<int, int>>::iterator it = team.begin(); it != team.end(); it++)
        cout << it->first << " " << it->second << endl;
    cout << endl;
    
    return 0;
}