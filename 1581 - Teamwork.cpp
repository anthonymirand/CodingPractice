 #include <iostream>
using namespace std;
int main()
{
    int N, value;
    int counter = 1;
    int numbers[1000];
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> value;
        numbers[i] = value;
    }
    numbers[N] = -1;
    for (int i = 1; i <= N; i++)
    {
        if (numbers[i] != numbers[i - 1])
        {
            cout << counter << " " << numbers[i - 1] << " ";
            counter = 1;
        }
        else
            counter++;
    }
    cout << endl;
    return 0;
}