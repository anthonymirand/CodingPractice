#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N;
    string position;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> position;
        int row = position[0] - 'a';
        int col = position[1] - '1';
        int answer = 0;
        for (int dr = -1; dr <= 1; dr += 2)
            for (int dc = -1; dc <= 1; dc += 2)
            {
                if (row + dr * 2 >= 0 && row + dr * 2 < 8 && col + dc >= 0 && col + dc < 8)
                    answer++;
                if (row + dr >= 0 && row + dr < 8 && col + dc * 2 >= 0 && col + dc * 2 < 8)
                    answer++;
            }
        cout << answer << endl;
    }
    return 0;
}