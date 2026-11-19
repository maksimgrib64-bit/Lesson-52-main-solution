#include "logic.h"
void calculate_diagonal_sum(const int matrix[MAX_SIZE][MAX_SIZE], int size, int& main_sum, int& sec_sum) {
	main_sum = 0;
	sec_sum = 0;

	for (int i = 0; i < size; i++) {
		main_sum += matrix[i][i];
		sec_sum += matrix[i][size - 1 - i];
	}
}




