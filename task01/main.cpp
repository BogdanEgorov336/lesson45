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

	cout << "Answer for minimum: " 
		<< (is_there_local_minimum(pointer, size) ? "Yes." : "No.") << endl;

	cout << "Answer for maximum: "
		<< (is_there_local_maximum(pointer, size) ? "Yes." : "No.") << endl;

		
	delete[] pointer;
	system("pause");
	return 0;
}