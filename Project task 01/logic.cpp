#include "logic.h"
int find_max(const int matrix[MAX_SIZE][MAX_SIZE], int size) {
	int max_value = matrix[0][0];

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
		{
			if (matrix[i][j] > max_value) {
				max_value = matrix[i][j];
			}
		}
	}
	return max_value;
}

int find_min(const int matrix[MAX_SIZE][MAX_SIZE], int size) {
	int min_value = matrix[0][0];

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
		{
			if (matrix[i][j] < min_value) {
				min_value = matrix[i][j];
			}
		}
	}
	return min_value;
}





