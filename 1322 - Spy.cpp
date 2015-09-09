#include <iostream>
#include <cstring>
using namespace std;

char word[100001];
int next_position[100001];

int getindex(char character)
{
    if (character >= 'A' && character <= 'Z')
        return character - 'A';
    if (character == '_')
        return 26;
    return character - 'a' + 27;
}

int main()
{
    int number, length;
    int contains[54];
    
    cin >> number >> word;
    memset(contains, 0, sizeof(contains));
    length = strlen(word);
    number--;
    
    for (int i = 0; i < length; i++)
        contains[getindex(word[i]) + 1]++;
    for (int i = 1; i < 53; i++)
        contains[i] += contains[i - 1];
    
    for (int i = 0; i < length; i++)
        next_position[contains[getindex(word[i])]++] = i;
    for (int i = 0; i < length; i++)
        cout << word[number = next_position[number]];
    cout << endl;
    
    return 0;
}
