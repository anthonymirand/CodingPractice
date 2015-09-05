#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double border(double x[], double y[], int i, int j)
{
    return sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i]-y[j]));
}

int main()
{
    int N;
    double R, answer;
    double x[100], y[100];
    
    cin >> N >> R;
    for (int i = 0; i < N; i++)
        cin >> x[i] >> y[i];
    answer = 2 * acos(-1.0) * R + border(x, y, N - 1, 0);
    for (int i = 1; i < N; i++)
        answer += border(x, y, i - 1, i);
    cout << setprecision(2) << fixed << answer << endl;
    
    return 0;
}