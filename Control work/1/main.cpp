#include <iostream>
#include <vector>

using namespace std;

vector<int> arr(0);
// функция которая записывает разложения числа
void write(int number)
{
    int s = 0;
    // цикл для вывода массива
    for (int t = 0; t < number; t++)
    {
        // условие , чтобы разложение не превышало число
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
// функция для получения ответа
void decomp(int n, int f, int l, int s)
{
    // условие выхода
    if (s == n)
    {
        write(n);
        return;
    }
    //цикл для записи
    for (int i = l; f < n && i < n; i++)
    {
        arr[f] = i;
        // условие для перехода на следующую строчку разложения
        if (s + i > n)break;
        decomp(n, f + 1, i, s + i);
    }
    // последняя строчка разложения, само число
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
