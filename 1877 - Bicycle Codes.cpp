#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    int first, second;
    string combination;
    
    cin >> combination;
    first = atoi(combination.c_str());
    cin >> combination;
    second = atoi(combination.c_str());
    
    if (first % 2 == 0 || second % 2 == 1)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    
    return 0;
}