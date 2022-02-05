#include <iostream>
#include <cstdlib>

using namespace std;

int customRandom(int min, int max) {
	return min + rand() % (max - min + 1);
}
int main()
{
	int arrayCapasity = 100;
	int *arrayCreate = new int[arrayCapasity];
	int *pArray = arrayCreate;
	
	for (int i = 0; i < arrayCapasity; i++) {
		arrayCreate[i] = customRandom(10, 90);
		
	}

	for (int i = 0; i < arrayCapasity; i++) {
		for (int j = i + 1; j < arrayCapasity; j++) {
			if (arrayCreate[i] == arrayCreate[j]) {
				arrayCreate[i] = 999;
			}
			
		}

	}
	for (int i = 0; i < arrayCapasity; i++) {
		cout << arrayCreate[i] << " ";
	}
}
