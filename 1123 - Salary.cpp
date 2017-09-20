#include <iostream>
#include <string>
using namespace std;

int main()
{
  string salary;

  getline(cin, salary);

  for (int i = 0; i < salary.length() / 2; i++)
  {
    if (salary[i] < salary[salary.length() - 1 - i])
    {
      int j = salary.length() - 1 - i - 1;
      while (salary[j] == '9')
        salary[j--] = '0';
      salary[j]++;
    }

    salary[salary.length() - 1 - i] = salary[i];
  }

  cout << salary << endl;

  return 0;
}
