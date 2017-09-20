#include <iostream>
#include <string>
using namespace std;

string findPalindromeAt(string str, int lower, int upper) {
  for (;
       0 <= lower && upper < str.length() && str[lower] == str[upper];
       upper++, lower--);
  return str.substr(lower + 1, upper - lower - 1);
}

string getPalindromeAt(string str, int center) {
  string even = findPalindromeAt(str, center, center + 1);
  string odd  = findPalindromeAt(str, center - 1, center + 1);
  return even.length() < odd.length() ? odd : even;
}

string findLongestPalindrome(string str) {
  string longest;
  for (int i = 0; i < str.length(); i++)
  {
    string candidate = getPalindromeAt(str, i);
    longest = longest.length() < candidate.length() ? candidate : longest;
  }
  return longest;
}

int main() {
  string str;
  getline(cin, str);

  cout << findLongestPalindrome(str) << endl;

  return 0;
}
