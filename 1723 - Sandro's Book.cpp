#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char spell[50];
    int count[26];
    int index = 0;
    int maximum;
    
    memset(count, 0, sizeof(count));
    
    cin >> spell;
    for (int i = 0; i < strlen(spell); i++)
        count[spell[i] - 'a']++;
    
    maximum = count[0];
    
    for (int i = 1; i < 26; i++)
        if (count[i] > maximum)
        {
            maximum = count[i];
            index = i;
        }
    cout << (char)(index + 'a') << endl;
    
    return 0;
}