#include "sort.h"
using namespace std;

void bubble_sort(int* vector, int length) {
			
	
	for (int i = 0; i < length - 1; i++) {

		bool flag = true;;
		for (int x = 0; x < length - 1 - i; x++)
		{

			if (vector[x] > vector[x + 1]) {
				swap(vector[x], vector[x + 1]);
				flag = false;
			}
			
		}
		if (flag) {
			break;
		}
	}
}
// O = (N^2)

void selected_sort(int* vector, int length) {
	int index = 0;
	for (int j = 0; j < length; j++) {

		int index = j;
		for (int i = 1; i < length; i++) {
			if (vector[i] < vector[index]) {
				index = i;
			}
		}
		swap(vector[index], vector[j]);
	}
}
// O = (N^2)