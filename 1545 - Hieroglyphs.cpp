#include <iostream>
using namespace std;

int main()
{
    int N;
    char hieroglyph[1001][3];
    char letter;
    
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> hieroglyph[i];
    
    cin >> letter;
    for (int i = 0; i < N; i++)
        if (hieroglyph[i][0] == letter)
            cout << hieroglyph[i] << endl;
    
    return 0;
}