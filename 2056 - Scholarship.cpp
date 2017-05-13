#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    int mark = 0, total = 0;
    bool satisfactory = false, excellent = true;
    
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> mark;
        if (mark == 3)
            satisfactory = true;
        if (mark != 5)
            excellent = false;
        total += mark;
    }
    
    if (satisfactory)
        cout << "None" << endl;
    else if (excellent)
        cout << "Named" << endl;
    else if (4.5 <= total / (float)N)
        cout << "High" << endl;
    else
        cout << "Common" << endl;
    
    return 0;
}