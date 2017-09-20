#include <iostream>
#include <ctime>
using namespace std;

int main()
{
  srand((unsigned)time(0));

  for (int i = 1; i <= 1000000;)
  {
    char random = (rand() % 'z') + 1;
    if ('a' <= random && random <= 'z')
    {
      cout << random;
      i++;
    }
  }
  cout << endl;

  return 0;
}
