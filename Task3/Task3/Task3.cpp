#include <iostream>
#include <windows.h>
using namespace std;

int sumRange(int a, int b)
{
    if (a == b)
    {
        return a;
    }
    return a + sumRange(a + 1, b);
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int a, b;
    cout << "Введіть a: ";
    cin >> a;
    cout << "Введіть b: ";
    cin >> b;
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    cout << "Сума: " << sumRange(a, b);
    return 0;
}