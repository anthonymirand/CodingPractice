#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double N, time, canal_time, see_friends;
    
    cin >> N >> time >> canal_time;
    for (int i = 0; i < N; i++)
    {
        cin >> see_friends;
        cout << fixed << setprecision(6) << (time + canal_time + see_friends) / 2 << endl;
    }
    
    return 0;
}