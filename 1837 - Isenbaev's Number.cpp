#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <map>
using namespace std;

int distances[300];
vector<int> adjacent[300];
map<string, int> names;

void bfs()
{
    int list[300];
    int head = 0, tail = 0;
    int temp, current, next;
    
    memset(distances, -1, sizeof(distances));
    
    if (names.find("Isenbaev") != names.end())
    {
        temp = names["Isenbaev"];
        distances[temp] = 0;
        list[tail] = temp;
        tail++;
        
        while (head < tail)
        {
            current = list[head];
            head++;
            
            for (int i = adjacent[current].size() - 1; i >= 0; i--)
            {
                next = adjacent[current][i];
                
                if (distances[next] == -1)
                {
                    distances[next] = distances[current] + 1;
                    list[tail] = next;
                    tail++;
                }
            }
        }
    }
}

int main()
{
    int N, teammate1, teammate2, teammate3;
    int value = 0;
    string name1, name2, name3;
    
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> name1 >> name2 >> name3;
        
        if (names.find(name1) == names.end())
            names[name1] = value++;
        if (names.find(name2) == names.end())
            names[name2] = value++;
        if (names.find(name3) == names.end())
            names[name3] = value++;
        
        teammate1 = names[name1];
        teammate2 = names[name2];
        teammate3 = names[name3];
        
        adjacent[teammate1].push_back(teammate2);
        adjacent[teammate1].push_back(teammate3);
        adjacent[teammate2].push_back(teammate1);
        adjacent[teammate2].push_back(teammate3);
        adjacent[teammate3].push_back(teammate1);
        adjacent[teammate3].push_back(teammate2);
    }
    
    bfs();
    
    for (map<string, int>::iterator it = names.begin(); it != names.end(); it++)
    {
        cout << it->first << " ";
        if (distances[it->second] == -1)
            cout << "undefined" << endl;
        else
            cout << distances[it->second] << endl;
    }
    
    return 0;
}
