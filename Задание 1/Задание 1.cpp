#include <iostream>
using namespace std;
int main()
{
	setlocale(NULL, "rus");
	int mass[10][10];
	int max = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			mass[i][j] = rand() % 10;
			if (mass[i][j] > max) {
				max = mass[i][j];
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
	cout << "Максимальный элемент: " << max << endl;
	system("pause");
}