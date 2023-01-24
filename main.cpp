#include "sorts.hpp"
#include "array.hpp"
#include <iostream>

//сортировка выбором не принята....
//сортировку вставками видел на уроке.... но здесь лучше сделать последовательный вызов сортировок

void test_CountSorts() {
	std::cout << "my tests...." << std::endl;
	{	//test 1
		int ar[] = {1,1,1,2,2,2,5,5,5,8,8,8};
		count_sort(ar, 12);
		show_ar(ar, 12
	}
	std::cout << "end of my test...." << std::endl;

}


int main(){
	test_CountSorts();


	int size = 50;
	int ar[size];

	std::cout << "Изначальный массив:" << std::endl;
	random_Fill_ar(ar, size, 0, 2);
	show_ar(ar, size, ' ');

	std::cout << "\nСортировка подсчётом:" << std::endl;
	//count_sort must accept only two arguments.... (int*, int) not more...
	count_sort(ar, size, 0, 2);
	show_Big_ar(ar, size, ' ');

	return 0;

	std::cout << "\nПузырьковая сортировка:" << std::endl;
	bubble_sort(ar, size);
	show_ar(ar, size, ' ');
	std::cout << "\nСортировка выбором:" << std::endl;
	selection_sort(ar, size);
	show_ar(ar, size, ' ');
	std::cout << "\nСортировка вставками:" << std::endl;
	insertion_sort(ar, size);
	show_ar(ar, size, ' ');

	return 0;
}
