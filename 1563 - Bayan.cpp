#include <iostream>
#include <cstring>
using namespace std;

char stores[1001][31];
char store[31];

bool visited(int size)
{
    for (int i = 0; i < size; i++)
        if (strcmp(store, stores[i]) == 0)
            return true;
    return false;
}

int main()
{
    int N;
    int size = 0;
    
    cin >> N;
    cin.getline(store, 31);
    
    for (int i = 0; i < N; i++)
    {
        cin.getline(store, 31);
        if (!visited(size))
        {
            strcpy(stores[size], store);
            size++;
        }
    }
    cout << N - size << endl;
    
    return 0;
}