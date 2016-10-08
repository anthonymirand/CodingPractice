#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int N;
    int best = 0, position = 0;
    int student_order[100001], present_order[100001];
    
    cin >> N;
    memset(present_order, 0, sizeof(present_order));
    
    for (int i = 0; i < N; i++)
        cin >> student_order[i];
    
    for (int i = 0; i < N; i++)
        present_order[((i - student_order[i] + 1) % N + N) % N]++;
    
    for (int i = 0; i < N; i++)
        if (present_order[i] > best)
        {
            best = present_order[i];
            position = i;
        }
    
    cout << position + 1 << endl;
    
    return 0;
}