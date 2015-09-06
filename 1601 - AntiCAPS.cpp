#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char character;
    bool uppercase = true;
    
    while (cin >> noskipws >> character)
    {
        if (character == '.' || character == '!' || character == '?')
        {
            uppercase = true;
            cout << character;
        }
        else
        {
            if (character >= 'A' && character <= 'Z')
            {
                if (uppercase)
                {
                    uppercase = false;
                    cout << character;
                }
                else
                    cout << (char)tolower(character);
            }
            else if (character >= 'a' && character <= 'z')
            {
                if (uppercase)
                {
                    uppercase = false;
                    cout << (char)toupper(character);
                }
                else
                    cout << character;
            }
            else
                cout << character;
        }
    }
    
    return 0;
}