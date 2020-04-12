#include <iostream>

using namespace std;
int dp(int a, int b){
    if (a == 1 && b == 1)
        return 1;
    if (a < 0 || b < 0)
        return 0;
    return (dp(a - 1, b - 2) + dp(a - 2, b - 1));
}
int main()
{
    int n, m;
    cin >> n >> m;
    cout << dp(n, m);
}
