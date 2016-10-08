#include <iostream>
#include <cstring>
using namespace std;

int factors[1000001];

int main()
{
    int first, second, answer, temp, value;
    long long number, sum, product;
    
    cin >> first >> second;
    memset(factors, -1, sizeof(factors));
    
    for (int i = 2; i < 1000001; i++)
        if (factors[i] == -1)
        {
            factors[i] = i;
            
            if (i < 1000001 / i)
                for (int j = i * i; j < 1000001; j += i)
                    factors[j] = i;
        }
    
    for (int i = first; i <= second; i++)
    {
        sum = 1;
        temp = i;

        while (temp != 1)
        {
            value = factors[temp];
            product = value;
            
            while (temp % value == 0)
            {
                product *= value;
                temp /= value;
            }
            
            sum *= (product - 1) / (value - 1);
        }
        
        if (i == first || sum * answer < number * i)
        {
            number = sum;
            answer = i;
        }
    }
    
    cout << answer << endl;
    
    return 0;
}