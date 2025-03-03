#include "util.h"

int main() {

	int size;
	cout << "Input size of array: ";
	cin >> size;

	int* pointer;
	pointer = new int[size];

	init(pointer, size, -10, 10);
	cout << "Array: " << convert_to_string(pointer, size) << endl;

	delete[] pointer;

	system("pause");
	return 0;
}