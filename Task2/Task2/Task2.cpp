#include <iostream>
#include <windows.h>
using namespace std;

void printStars(int n)
{
    if (n <= 0)
    {
        return;
    }
    cout << "*";
    printStars(n - 1);
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int n;
    cout << "Введіть кількість зірок: ";
    cin >> n;
    printStars(n);
    return 0;
}