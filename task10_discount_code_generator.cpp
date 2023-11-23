//Program dlia generacii codov
#include <iostream>
#include <ctime>
using namespace std;
int main() {
	
	int col = 1; // colichestvo simvolov v code
	int code = 0; // peremennaia dlia generacii coda
	int col2 = 0;
	while (col != 0) {
		system("cls");
		srand(time(NULL));

		cout << "Input colichestvo cifr dlia coda: " << endl;
		cin >> col;
		col2 = col;
		for (int i = 0; i < col; i++) {
			col2 *= 10;
		}
		col2 /= col;
		code = rand() % col2;
		cout << "Vash code: " << code << endl;
		system("pause");
	}
	return 0;
}
