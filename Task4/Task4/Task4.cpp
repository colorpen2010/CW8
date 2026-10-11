#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int sum10(int arr[], int start)
{
    int sum = 0;
    for (int i = start; i < start + 10; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int findMinStart(int arr[], int start)
{
    if (start == 90)
    {
        return 90;
    }
    int best = findMinStart(arr, start + 1);
    if (sum10(arr, start) < sum10(arr, best))
    {
        return start;
    }
    return best;
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
    int arr[100];
    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand() % 100;
    }
    cout << "Масив:" << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << arr[i] << " ";
        if ((i + 1) % 10 == 0)
        {
            cout << endl;
        }
    }
    int position = findMinStart(arr, 0);
    cout << endl;
    cout << "Початкова позиція: " << position + 1 << endl;
    cout << "Числа послідовності: ";
    for (int i = position; i < position + 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Мінімальна сума: " << sum10(arr, position);
    return 0;
}