#include <iostream>
#include "util.h"
#include "sort.h"
#define	SIZE 20
using namespace std;

int main() {

	int vector[SIZE];

	int a, b;
	cin >> a >> b;
	
	cout << "before " << get_massive(vector, SIZE, a, b) << endl
		<< "after " << bubble_sort(vector, SIZE) << endl;

	return 0;
}