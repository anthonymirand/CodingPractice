#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int N;
    unsigned int sequence[250001 / 2 + 1];
    
    cin >> N;
    for(int i = 0; i < N / 2 + 1; i++)
        cin >> sequence[i];
    
    make_heap(sequence, sequence + N / 2 + 1);
    for(int i = N / 2 + 1; i < N; i++)
    {
        cin >> sequence[N / 2 + 1];
        push_heap(sequence, sequence + N / 2 + 2);
        pop_heap(sequence, sequence + N / 2 + 2);
    }
    
    if (N % 2 == 1)
        cout << fixed << setprecision(1) << sequence[0] / 1.0 << endl;
    else
    {
        if (sequence[1] > sequence[2])
            cout << fixed << setprecision(1) << (sequence[0] + sequence[1]) / 2.0 << endl;
        else
            cout << fixed << setprecision(1) << (sequence[0] + sequence[2]) / 2.0 << endl;
    }
    
    return 0;
}