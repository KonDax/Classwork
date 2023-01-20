#include "sorts.hpp"
#include <iostream>

void show_ar(int* ar, int size){
	for (int i = 0; i < size; i++){
		std::cout << ar[i] << " ";
	}
	std::cout << std::endl;
}

int main(){

	int ar[10] = {8, 5, 2, 0, 1, 9, 6, 7, 3, 4};
	show_ar(ar, 10);
	insertion_sort(ar, 10);
	std::cout << std::endl;
	show_ar(ar, 10);

	return 0;

}
