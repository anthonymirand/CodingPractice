#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int N, query;
    int database[100001];
    string temp;
    
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> database[i];

    sort(database, database + N);

    cin >> temp;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> query;
        cout << database[query - 1] << endl;
    }
    
    return 0;
}