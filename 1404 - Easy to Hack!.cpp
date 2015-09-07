#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int length, temp;
    char secret[101], answer[101];
    
    cin >> secret;
    length = strlen(secret);
    memset(answer, 0, sizeof(answer));
    
    for (int i = length - 1; i > 0; i--)
    {
        temp = (secret[i] - secret[i - 1]) % 26;
        if (temp < 0)
            temp += 26;
        answer[i] = temp + 'a';
    }
    
    temp = (secret[0] - 'a' - 5) % 26;
    if (temp < 0)
        temp += 26;
    answer[0] += temp + 'a';
    cout << answer << endl;
    
    return 0;
}
