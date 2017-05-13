#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    int total = 2;
    string name;
    
    cin >> N;
    for (int i = 0; i <= N; i++)
    {
        getline(cin, name);
        if (!name.empty())
            total += 1;
        if (name.find("+one") != string::npos)
            total += 1;
    }
    
    if (total == 13)
        total += 1;
    cout << total * 100 << endl;
    
    return 0;
}