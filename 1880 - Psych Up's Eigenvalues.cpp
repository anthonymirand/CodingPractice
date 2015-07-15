#include <iostream>
using namespace std;
int main()
{
    int person1, person2, person3;
    int person1_values[4000], person2_values[4000], person3_values[4000];
    int matches = 0;
    cin >> person1;
    for (int i = 0; i < person1; i++)
        cin >> person1_values[i];
    cin >> person2;
    for (int i = 0; i < person2; i++)
        cin >> person2_values[i];
    cin >> person3;
    for (int i = 0; i < person3; i++)
        cin >> person3_values[i];
    for (int i = 0, j = 0, k = 0; i < person1; i++)
    {
        while (j < person2 && person2_values[j] < person1_values[i])
            j++;
        while (k < person3 && person3_values[k] < person1_values[i])
            k++;
        if (person2_values[j] == person1_values[i] && person3_values[k] == person1_values[i])
            matches++;
    }
    cout << matches << endl;
    return 0;
}