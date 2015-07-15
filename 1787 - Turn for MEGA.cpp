#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int cars_per_minute, minutes_passed, cars_passed;
    int total_cars = 0;
    cin >> cars_per_minute >> minutes_passed;
    for (int i = 0; i < minutes_passed; i++)
    {
        cin >> cars_passed;
        total_cars += cars_passed;
        // total_cars - number of cars that couldn't get through per minute
        total_cars = max(0, total_cars - cars_per_minute);
    }
    cout << total_cars << endl;
    return 0;
}