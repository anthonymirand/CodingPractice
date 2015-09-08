#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
    string line;
    int length, first, last;
    
    while (getline(cin, line))
    {
        length = line.size();
        
        for (int i = 0; i < length;)
        {
            if (isalpha(line[i]))
            {
                first = i;
                last = i;
                
                while (isalpha(line[last]))
                    last++;
                i = last--;
                
                while (first < last)
                {
                    swap(line[first], line[last]);
                    first++;
                    last--;
                }
            }
            else
                i++;
        }
        cout << line << endl;
    }
    
    return 0;
}