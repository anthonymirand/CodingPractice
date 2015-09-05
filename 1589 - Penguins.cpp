#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N, top_penguin;
    char value[20];
    int counter[3] = {0, 0, 0};
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> value;
        if (value[0] == 'E')
            counter[0]++;
        else if (value[0] == 'L')
            counter[1]++;
        else if (value[0] == 'M')
            counter[2]++;
        cin >> value;
    }
    top_penguin = max(counter[0], max(counter[1], counter[2]));
    if (counter[0] == top_penguin)
        cout << "Emperor Penguin" << endl;
    else if (counter[1] == top_penguin)
        cout << "Little Penguin" << endl;
    else if (counter[2] == top_penguin)
        cout << "Macaroni Penguin" << endl;
    return 0;
}