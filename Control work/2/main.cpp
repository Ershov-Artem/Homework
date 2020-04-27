#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    int c = n-1;
    int money = 0;
    while (s>0)
    {
        if (s >= A[c])
        {
            money++;
            s -= A[c];
        }
        else
        {
            c--;
        }
    }
    cout << money << endl;
    return 0;
}
