#include <iostream>
using namespace std;

int main()
{
    int N, temp, banknote, mostcommon;
    int count = 0;
    
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        if (count == 0)
        {
            mostcommon = temp;
            count++;
        }
        else
        {
            if (temp == mostcommon)
                count++;
            else
                count--;
        }
    }
    cout << mostcommon << endl;
    
    return 0;
}