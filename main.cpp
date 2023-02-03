#include "sorts.hpp"
#include "array.hpp"
#include <iostream>

int main(){

	int size = 10;
	int ar[size];

	std::cout << "Изначальный массив:" << std::endl;
	random_Fill_ar(ar, size);
	show_ar(ar, size);

	std::cout << "Минимальный элемент массива:\n" << get_min(ar, size) << std::endl;

	std::cout << "\nСортировка подсчётом:" << std::endl;
	count_sort(ar, size);
	show_Big_ar(ar, size);

	std::cout << "\nПузырьковая сортировка:" << std::endl;
	bubble_sort(ar, size);
	show_ar(ar, size);
	std::cout << "\nСортировка выбором:" << std::endl;
	selection_sort(ar, size);
	show_ar(ar, size);
	std::cout << "\nСортировка вставками:" << std::endl;
	insertion_sort(ar, size);
	show_ar(ar, size);

	return 0;
}
