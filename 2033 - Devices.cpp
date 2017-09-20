#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
  string phone;
  int price;
  int maxCount = 0;
  unordered_map<string, int> phoneCount;
  unordered_map<string, int> phonePrice;

  for (int i = 0; i < 6; i++)
  {
    cin >> phone >> phone >> price;

    phoneCount[phone]++;
    maxCount = max(maxCount, phoneCount[phone]);

    if (phonePrice.count(phone) == 0)
      phonePrice[phone] = price;
    phonePrice[phone] = min(phonePrice[phone], price);
  }

  string answer;
  int minPrice = INT_MAX;
  for (auto it = phoneCount.begin(); it != phoneCount.end(); it++)
  {
    phone = it->second == maxCount ? it->first : "";
    if (!phone.empty() && phonePrice[phone] < minPrice)
    {
      minPrice = phonePrice[phone];
      answer = phone;
    }
  }

  cout << answer << endl;

  return 0;
}
