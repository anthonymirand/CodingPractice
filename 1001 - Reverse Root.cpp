#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	double numbers;
    vector<double> vectors;
    while (cin >> number) 
        vectors.push_back(numbers);
    for (int i = vectors.size() - 1; i >= 0; i--)
        cout << setprecision(4) << fixed << sqrt(vectors[i]) << endl;
    return 0;
}