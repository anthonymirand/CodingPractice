#include <iostream>
using namespace std;

int main()
{
  int x, y;

  cin >> x >> y;

  if ((x < 0 || y < 0) || ((x + y) % 2 == 0))
    cout << x << ' ' << y << endl;
  else
    cout << y << ' ' << x << endl;

  return 0;
}
