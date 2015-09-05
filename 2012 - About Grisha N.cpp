#include <iostream>
using namespace std;

int main()
{
    int N;
    double problem_time;
    
    cin >> N;
    problem_time = (12 - N) * 0.75;
    if (problem_time <= 4)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}