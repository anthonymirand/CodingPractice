#include <iostream>
using namespace std;

int main()
{
    const int nominal = 6;
    const int nominals[nominal] = {10, 50, 100, 500, 1000, 5000};
    int value[nominal];
    int total = 0;
    int cost, min, max;
    
    for (int i = 0; i < nominal; i++)
    {
        cin >> value[i];
        total += value[i] * nominals[i];
    }
    cin >> cost;
    
    
    int minNominal = 0;
    for (int i = 0; value[i] == 0 && i < nominal; i++, minNominal++) {}
    
    min = (total - nominals[minNominal] + cost) / cost;
    max = total / cost;
    
    cout << max - min + 1 << endl;
    for (int i = min; i <= max; i++)
        cout << i << " ";
    cout << endl;
    
    return 0;
}
