#include "logic.h"

int count_local_min(int* vector, int size) {

	int count = 0;

	if (vector[0] < vector[1]) {
		count++;
	}

	for (int i = 1; i < size; i++) {

		if (vector[i - 1] > vector[i]
			&& vector[i] < vector[i + 1]) {

			count++;
		}
	}

	if (vector[size - 2] > vector[size - 1]) {
		count;
	}

	return count;
}

int* find_indices_of_local_minimum(int* vector, int size, int* count) {

	*count = count_local_min(vector, size);

	int* indices = new int[*count];
	int j = 0;

	if (size > 1 && vector[0] < vector[1]) {
		*indices = 0;
		j++;
	}

	int n = size - 1;
	for (int i = 1; i < n; i++) {

		if (vector[i] > vector[i - 1]
			&& vector[i] < vector[i + 1]) {

			*(indices + j) = i;
			j++;
		}
	}

	if (size > 1 && vector[size - 1] < vector[size - 2]) {
		*(indices + j) = size - 1;
	}

	return indices;
}