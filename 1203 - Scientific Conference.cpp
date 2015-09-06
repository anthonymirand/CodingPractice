#include <iostream>
#include <algorithm>
using namespace std;

struct event
{
    int start, end;
    bool operator < (event x) const
    {
        return end < x.end;
    }
} reports[100001];

int main()
{
    int N;
    int last = 0, answer = 0;

    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> reports[i].start >> reports[i].end;

    sort(reports, reports + N);

    for (int i = 0; i < N; i++)
        if (reports[i].start > last)
        {
            answer++;
            last = reports[i].end;
        }
    cout << answer << endl;

    return 0;
}