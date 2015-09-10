#include <iostream>
#include <set>
using namespace std;

int main(){
    int N, date;
    int answer = 0;
    set<int> teacher_dates;
    
    cin >> N;
    for (int i = 0;i < N; i++)
    {
        cin >> date;
        teacher_dates.insert(date);
    }

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> date;
        if (teacher_dates.find(date) != teacher_dates.end())
            answer++;
    }
    cout << answer << endl;
    
    return 0;
}