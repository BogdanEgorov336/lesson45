#include "util.h"
#include "logic.h"

int main() {

	int size;
	cout << "Input size of array: ";
	cin >> size;

	int* pointer;
	pointer = new int[size];

	init(pointer, size, -10, 10);
	cout << "Array: " << convert_to_string(pointer, size) << endl;

	int count;
	int* indices = find_indices_of_local_minimum(pointer, size, &count);

		
	delete[] pointer;
	delete[] indices;
	system("pause");
	return 0;
}