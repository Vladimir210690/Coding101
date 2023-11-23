//Program dlia generacii codov
#include <iostream>
#include <ctime>
using namespace std;
int main() {
	
	int col = 1; // colichestvo simvolov v code
	char code = 0; // peremennaia dlia generacii coda
	
	int col2 = 1;
	while (col != 0) {
		system("cls");
		srand(time(NULL));

		cout << "Input colichestvo cifr dlia coda: " << endl;
		cin >> col;
		
		for (int i = 0; i < col;) {
			code = rand() % 90;
			if (code > 65) {
				cout << "Vash code: " << code << endl;
				i++;
			}
		}
		
		system("pause");
	}
	return 0;
}
