#pragma once
#include <iostream>
#include <string>
using namespace std;

void init(int* vector, int size, int a, int b) {

	for (int i = 0; i < size; i++) {

		vector[i] = rand() % (b - a + 1) + a;
	}
}

string convert_to_string(int* vector, int size) {

	string str = "";

	for (int i = 0; i < size; i++) {

		str += to_string(vector[i]) + " ";
	}

	return str;
}