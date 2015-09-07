#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int lines_per_page, characters_per_line, total_words;
    int lines = 1, characters = 0;
    char words[10001];
    
    cin >> lines_per_page >> characters_per_line >> total_words;
    for (int i = 0; i < total_words; i++)
    {
        cin >> words;
        if (characters + strlen(words) + 1 <= characters_per_line + 1)
            characters += strlen(words) + 1;
        else
        {
            characters = strlen(words) + 1;
            lines++;
        }
    }
    cout << (lines + lines_per_page - 1) / lines_per_page << endl;
    
    return 0;
}