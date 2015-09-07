#include <iostream>
#include <cstring>
using namespace std;

int getcost(char character, char key[])
{
    for (int i = 0; i < strlen(key); i++)
        if (character == key[i])
            return i + 1;
    return 0;
}

int main()
{
    char keys[][4] = {"abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "vwx", "yz", ".,!", " "};
    char character;
    int answer = 0;
    
    while (cin >> noskipws >> character)
        for (int i = 0; i < 11; i++)
            answer += getcost(character, keys[i]);
    cout << answer << endl;
    
    return 0;
}