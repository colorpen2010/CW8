#include <iostream>
#include <windows.h>
using namespace std;

int power(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return a * power(a, n - 1);
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int a, n;
    cout << "Введіть число: ";
    cin >> a;
    cout << "Введіть степінь: ";
    cin >> n;
    cout << "Результат: " << power(a, n);
    return 0;
}