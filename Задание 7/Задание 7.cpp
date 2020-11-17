#include <iostream>
using namespace std;
int main()
{
    setlocale(NULL, "rus");
    int mass[2][4];
    int n;
    int pr = 1;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mass[i][j] = rand()  % 3 + 1;
            pr *= mass[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
    if (pr > 99 && pr < 1000)
    {
        cout << "Произведение элементов является трехзначным числом: " << pr << endl;
    }
    else
    {
        cout << "Произведение элементов не является трехзначным числом: " << pr << endl;
    }
    system("pause");
}