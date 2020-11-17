#include <iostream>
using namespace std;
int main()
{
    setlocale(NULL, "rus");
    int mass[4][4];
    int n = 1;
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mass[i][j] = rand() % 10;
            if (i==j)
            {
                sum += mass[i][j];
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++) {
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Сумма элементов главной диагонали=" << sum << endl;
    system("pause");
}