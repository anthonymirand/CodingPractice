#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int difference = 0;
    string line, section;
    
    while (getline(cin, line))
    {
        for (int i = line.size() - 1; i >= 0; i--)
            if (!((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')))
                line[i] = ' ';
        
        istringstream is(line);
        
        while (is >> section)
        {
            if (section == "tram")
                difference++;
            else if (section == "trolleybus")
                difference--;
        }
    }
    
    if (difference > 0)
        cout << "Tram driver" << endl;
    else if (difference < 0)
        cout << "Trolleybus driver" << endl;
    else
        cout << "Bus driver" << endl;
    
    return 0;
}