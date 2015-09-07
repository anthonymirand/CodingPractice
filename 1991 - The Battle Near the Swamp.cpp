#include <iostream>
using namespace std;

int main()
{
    int N, droids, boomboom;
    int unused_boomboom = 0, droids_left = 0;
    
    cin >> N >> droids;
    for (int i = 0; i < N; i++)
    {
        cin >> boomboom;
        if (boomboom > droids)
            unused_boomboom += boomboom - droids;
        if (boomboom < droids)
            droids_left += droids - boomboom;
    }
    cout << unused_boomboom << " " << droids_left << endl;
    
    return 0;
}