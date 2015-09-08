#include <iostream>
using namespace std;

int main()
{
    int X, Y, C;
    
    cin >> X >> Y >> C;
    if (X + Y < C)
        cout << "Impossible" << endl;
    else if (X <= C)
        cout << X << " " << C - X << endl;
    else
        cout << C << " " << 0 << endl;
	
	return 0;
}