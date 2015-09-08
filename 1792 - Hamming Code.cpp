#include <iostream>
#include <vector>
using namespace std;

bool hammingtest(vector<int> numbers)
{
    int test = numbers[0] ^ numbers[1] ^ numbers[2] ^ numbers[3];
    
    if ((numbers[4] != (test ^ numbers[0])) || (numbers[5] != (test ^ numbers[1])) || (numbers[6] != (test ^ numbers[2])))
        return false;
    
    return true;
}

int main()
{
    vector<int> numbers1(7), numbers2(7);
    
    for (int i = 0; i < 7; i++)
        cin >> numbers1[i];
    
    if (hammingtest(numbers1))
    {
        for (int i = 0; i < 7; i++)
            cout << numbers1[i] << " ";
        cout << endl;
    }
    else
    {
        for (int i = 0; i < 7; i++)
        {
            numbers2 = numbers1;
            numbers2[i] ^= 1;
            
            if (hammingtest(numbers2))
            {
                for (int i = 0; i < 7; i++)
                    cout << numbers2[i] << " ";
                cout << endl;
                break;
            }
        }
    }
    
    return 0;
}
