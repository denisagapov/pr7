#include <iostream>
using namespace std;
int main()
{
    setlocale(NULL, "rus");
    int mass[5][5];
    int n;
    cout << "Введите число для замены элементов:" << endl;
    cin >> n;
    cout << "Исходный массив:" << endl;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            mass[i][j] = rand() % 10;
        }
    }
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if (n > mass[i][j])
            {
                mass[i][j] = n;
            }
        }
    }
    cout << "Новый массив:" << endl;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
}