#include <iostream>
using namespace std;

int customRandom(int min, int max) {
	return min + rand() % (max - min + 1);
}

int main()
{
	const int row = 100;
	const int column = 100;
	int array[100][100];
	int minNumber = 99;
	int pArray = array[100][100];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			array[i][j] = customRandom(10, 99);
			cout << array[i][j] << " ";
			if (minNumber > array[row][column])
			{
				minNumber = array[row][column];
			}
		}
	}
	cout << "min number:" << minNumber;
}