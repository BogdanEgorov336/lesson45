#include "logic.h";

bool is_there_local_minimum(int* vector, int size) {

	if (size <= 0) {
		return false;
	}

	if (size == 1) {
		return true;
	}

	if (vector[0] < vector[1]) {
		return true;
	}

	for (int i = 1; i < size; i++) {

		if (vector[i - 1] > vector[i]
			&& vector[i] < vector[i + 1]) {

			return true;
		}
	}

	if (vector[size - 2] > vector[size - 1]) {
		return true;
	}

	return false;
}

bool is_there_local_maximum(int* vector, int size) {

	if (size <= 0) {
		return false;
	}

	if (size == 1) {
		return true;
	}

	if (vector[0] > vector[1]) {
		return true;
	}

	for (int i = 1; i < size; i++) {

		if (vector[i - 1] < vector[i]
			&& vector[i] > vector[i + 1]) {

			return true;
		}
	}

	if (vector[size - 2] < vector[size - 1]) {
		return true;
	}

	return false;
}