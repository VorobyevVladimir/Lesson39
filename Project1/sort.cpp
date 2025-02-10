#include "sort.h"
#include <iostream>

void bubble_sort(int* vector, int length) {
			
	for (int i = 0; i < length - 1; i++) {

		for (int i = 0; i < length - 1; i++)
		{
			if (vector[i] > vector[i + 1]) {
				swap(vector[i], vector[i + 1]);
			}
		}
	}
}