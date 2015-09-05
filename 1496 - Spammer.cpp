#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    int N;
    string word;
    map<string, int> wordcount;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> word;
        wordcount[word]++;
    }
    for (map<string, int>::iterator it = wordcount.begin(); it != wordcount.end(); it++)
        if (it->second > 1)
            cout << it->first << endl;
    return 0;
}