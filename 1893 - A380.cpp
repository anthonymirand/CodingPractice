#include <iostream>
#include <string>
using namespace std;

int main()
{
    int row;
    char col;
    string answer;
    
    cin >> row >> col;
    if (row <= 2)
    {
        if (col == 'A' || col == 'D')
            answer = "window";
        else
            answer = "aisle";
    }
    else if (row <= 20)
    {
        if (col == 'A' || col == 'F')
            answer = "window";
        else
            answer = "aisle";
    }
    else
    {
        if (col == 'A' || col == 'K')
            answer = "window";
        else if (col == 'C' || col == 'D' || col == 'G' || col == 'H')
            answer = "aisle";
        else
            answer = "neither";
    }
    cout << answer << endl;
    
    return 0;
}