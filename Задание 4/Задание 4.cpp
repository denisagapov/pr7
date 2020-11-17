#include <iostream>
using namespace std;
int main()
{
    setlocale(NULL, "rus");
    int mass[5][5];
    int n;
    int k = 1;
    cout << "Введите число для поиска элементов:" << endl;
    cin >> n;
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
    cout << "Номера элементов больше заданного числа:" << endl;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++) 
        {
            if (mass[i][j] > n) 
            {
                cout << k <<  "-й элемент:    " << "строка [" << i << "] - столбец[" << j << "], \n";
                k++;
            }
        }
    }
    system("pause");
}