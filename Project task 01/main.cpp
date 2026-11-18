#include <iostream>
#include "logic.h"
using namespace std;
int main() {
	int matrix[MAX_SIZE][MAX_SIZE];
	int size;

	cout << "Input matrix size: ";
	cin >> size;

	cout << "Input matrix elements: " << endl;
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++) {

			cin >> matrix[i][j];
		}
	}
	

	int max_value =  find_max(matrix, size);
	int min_value = find_min(matrix, size);

	cout << "Max element: " << max_value << endl;
	cout << "Min element: " << min_value << endl;

	return 0;
}