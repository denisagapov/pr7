#include <iostream>
using namespace std;
int main()
{
    setlocale(NULL, "rus");
    int mass[5][5];
    int k = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            mass[i][j] = rand() % 10;
            if (mass[i][j] % 2 == 1)
            {
                k++;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++) {
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Количество нечетных элементо=" << k << endl;
    system("pause");
}

