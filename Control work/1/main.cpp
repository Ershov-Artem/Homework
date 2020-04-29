#include <iostream>
#include <vector>

using namespace std;

vector<int> arr(0);
// ������� ������� ���������� ���������� �����
void write(int number)
{
    int s = 0;
    // ���� ��� ������ �������
    for (int t = 0; t < number; t++)
    {
        // ������� , ����� ���������� �� ��������� �����
        if (s + arr[t] == number)
        {
            cout << arr[t];
            cout << endl;
            return;
        }
        cout << arr[t] << "+";
        s += arr[t];
    }
}
// ������� ��� ��������� ������
void decomp(int n, int f, int l, int s)
{
    // ������� ������
    if (s == n)
    {
        write(n);
        return;
    }
    //���� ��� ������
    for (int i = l; f < n && i < n; i++)
    {
        arr[f] = i;
        // ������� ��� �������� �� ��������� ������� ����������
        if (s + i > n)break;
        decomp(n, f + 1, i, s + i);
    }
    // ��������� ������� ����������, ���� �����
    if (f == 0)
    {
        cout << n;
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    arr.resize(n);
    decomp(n, 0, 1, 0);
    return 0;
}
