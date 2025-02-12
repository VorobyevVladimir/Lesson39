#include <iostream>
#include "util.h"
#include "sort.h"
#define	SIZE 10
using namespace std;

//это все шутки и юмор

int main() {

	int vector[SIZE];//{10, 2, 3, 4, 5, 6, 7, 8, 9, 1};

	int a, b;
	cin >> a >> b;
	
	get_massive(vector, SIZE, a, b);

	cout << "before: " << print_massive(vector, SIZE) << endl;
	
	 selected_sort(vector, SIZE);

	 cout << "after: " << print_massive(vector, SIZE) << endl;

	return 0;
}