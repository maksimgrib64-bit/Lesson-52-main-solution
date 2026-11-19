#include <iostream>
#include "logic.h"
using namespace std;
int matrix[MAX_SIZE][MAX_SIZE];
int main() {
	int size;

	cout << "Input matrix size: ";
	cin >> size;

	cout << "Input matrix elements: " << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {

			cin >> matrix[i][j];
		}
	}

	int main_sum, sec_sum;
	calculate_diagonal_sum(matrix, size, main_sum, sec_sum);
	
	cout << "Sum of main diagonal: " << main_sum<< endl;
	cout << "Sum of secondary diagonal: " << sec_sum << endl;

	return 0;
}