#include "sorts.hpp"

void insertion_sort(int *ar, int size){
	int key, k;
	for (int i = 1; i < size; i++){
		key = ar[i];
		k = i;
		for (int j = i - 1; ar[j] < key && j >= 0; j--, k--){
			ar[k] = ar[j];
		}
		ar[k] = key;
	}
}

