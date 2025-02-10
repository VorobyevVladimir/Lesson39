#include <iostream>
#include <string>
#include "util.h"
#include <time.h>
using namespace std;

void get_massive(int* vector ,int SIZE, int a , int b) {
	srand(time(0));

	for (int i = 0; i < SIZE; i++) {
		vector[i] = rand() % (b -a + 1);
	}
}

string print_massive(int* vector, int SIZE) {
	string massive = "";

	for (int i = 0; i < SIZE; i++) {
		massive += to_string(vector[i]) + " ";
	}

	return massive;
}