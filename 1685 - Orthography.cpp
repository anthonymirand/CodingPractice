#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main()
{
    int length, pair_1, pair_2;
    int size_A = 1, size_B;
    string sentence;
    bool found = true;
    pair<int, int> A[20000], B[20000];
    
    getline(cin, sentence);
    length = sentence.size();
    
    A[0] = make_pair(0, length - 1);
    
    while (found)
    {
        found = false;
        size_B = 0;
        
        for (int i = 0; i < size_A; i++)
        {
            if (A[i].second != A[i].first)
            {
                found = true;
                pair_1 = A[i].first;
                pair_2 = A[i].second;
                
                if (pair_2 == pair_1 + 1)
                {
                    B[size_B] = make_pair(pair_1, pair_1);
                    size_B++;
                    
                    B[size_B] = make_pair(pair_1 + 1, pair_1 + 1);
                    size_B++;
                }
                else
                {
                    B[size_B] = make_pair(pair_1 + 1, (pair_1 + pair_2) / 2);
                    size_B++;
                    
                    B[size_B] = make_pair(pair_1, pair_1);
                    size_B++;
                    
                    B[size_B] = make_pair((pair_1 + pair_2) / 2 + 1, pair_2);
                    size_B++;
                }
            }
            else
            {
                B[size_B] = A[i];
                size_B++;
            }
        }
        
        for (int i = 0; i < size_B; i++)
            A[i] = B[i];
        size_A = size_B;
    }
    
    for (int i = 0; i < length; i++)
        cout << sentence[A[i].first];
    cout << endl;
    
    return 0;
}