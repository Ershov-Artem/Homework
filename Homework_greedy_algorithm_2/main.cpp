#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<vector<long long>> time(n, vector<long long>(2));
    long long max = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> time[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (max < time[i][1])
        {
            max = time[i][1];
            //maxIndex = i;
        }
    }
    vector<long long> room(max + 1);
    for (int i = 0; i < max; i++)
    {
        room[i] = 0;
    }
    long long tmpAud = 0;
    for (int i = 0; i < n; i++)
    {

        room[time[i][0]]++;
        room[time[i][1]]--;
    }
    long long auditories = 0;
    int maxVal = 0;
    for (int i = 0; i < max; i++)
    {
            auditories += room[i];
            if (maxVal < auditories)
            {
                maxVal = auditories;
            }
    }
    cout << auditories << endl;
    return 0;
}
