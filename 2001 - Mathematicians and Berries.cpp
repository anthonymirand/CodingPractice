#include <iostream>
using namespace std;

int main()
{
    int weight1, weight2, change1, change2;
    
    cin >> weight1 >> weight2;
    cin >> change1 >> change2;
    
    weight2 -= change2;
    
    cin >> change1 >> change2;
    
    weight1 -= change1;
    
    cout << weight1 << " " << weight2 << endl;
    
    return 0;
}