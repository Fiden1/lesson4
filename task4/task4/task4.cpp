
#include <iostream>
using namespace std;
int customRandom(int min, int max) {
	return min + rand() % (max - min + 1);
}

int main()
{
	const int row = 10;
	const int column = 10;
	int array[row][column];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			array[i][j] = customRandom(10, 30);
			cout << array[i][j] << " ";

		}
	}
}
