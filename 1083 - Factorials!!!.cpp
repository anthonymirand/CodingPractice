#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	int k = 0, answer = 1;
	string exclamation;
	cin >> n;
	cin >> exclamation;
	k = exclamation.size();
	while (n > 0)
	{
		answer *= n;
		n -= k;
	}
	cout << answer << endl;
	return 0;
}