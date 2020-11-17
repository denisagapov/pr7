#include <iostream>
using namespace std;
int main()
{
    setlocale(NULL, "rus");
    int mass[10][10];
    int sr = 0;
    int k = 0;
    int summ = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++) 
        {
            mass[i][j] = rand() % 10;
            if (mass[i][j] % 2 == 0)
            {
                summ += mass[i][j];
                k++;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++) {
            cout << mass[i][j] << " ";
        }
        cout << endl;
    }
    sr = summ / k;
    cout << "Среднее арифметическое четных элементов=" << sr << endl;
    system("pause");
}

