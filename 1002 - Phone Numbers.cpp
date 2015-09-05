#include <iostream>
#include <string>
#include <vector>
using namespace std;

string converter(string word)
{
    string convert = "";
    
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] == 'i' || word[i] == 'j')
            convert += "1";
        else if (word[i] == 'a' || word[i] == 'b' || word[i] == 'c')
            convert += "2";
        else if (word[i] == 'd' || word[i] == 'e' || word[i] == 'f')
            convert += "3";
        else if (word[i] == 'g' || word[i] == 'h')
            convert += "4";
        else if (word[i] == 'k' || word[i] == 'l')
            convert += "5";
        else if (word[i] == 'm' || word[i] == 'n')
            convert += "6";
        else if (word[i] == 'p' || word[i] == 'r' || word[i] == 's')
            convert += "7";
        else if (word[i] =='t' || word[i] == 'u' || word[i] == 'v')
            convert += "8";
        else if (word[i] == 'w' || word[i] == 'x' || word[i] == 'y')
            convert += "9";
        else
            convert += "0";
    }

    return convert;
}

int main()
{
    int N;
    string number, intermediate;
    vector<string> dictionary;
    vector<string> converted;
    int dynamic[101];
    
    while (cin >> number)
    {
        if (number == "-1")
            break;
        
        cin >> N;
        
        dictionary.clear();
        converted.clear();
        
        for (int i = 0; i < N; i++)
        {
            cin >> intermediate;
            dictionary.push_back(intermediate);
            converted.push_back(converter(intermediate));
        }
        
        fill(dynamic, dynamic + number.size() + 1, (1 << 20));
        dynamic[0] = 0;
        vector<string> sequence(number.size() + 1, "");
        
        for (int i = 1; i <= number.size(); i++)
            for (int j = 0; j < N; j++)
                if (converted[j].size() <= i && 
                    number.substr(i - converted[j].size(), converted[j].size()) == converted[j] && 
                    dynamic[i] > 1 + dynamic[i - converted[j].size()])
                {
                        dynamic[i] = 1 + dynamic[i - converted[j].size()];
                        sequence[i] = sequence[i - converted[j].size()] + dictionary[j] + " ";
                }
        
        if (dynamic[number.size()] == (1 << 20))
            cout << "No solution." << endl;
        else
        {
            intermediate = sequence[number.size()];
            intermediate.erase(intermediate.size() - 1, 1);
            cout << intermediate << endl;
        }
    }
    
    return 0;
}