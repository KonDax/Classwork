#include "array.hpp"

void random_Fill_ar(int* ar, int size, int min, int max){
    srand(time(nullptr));
    for (int i = 0; i < size; i++){
        ar[i] = min + rand() % (max - min + 1);
    }
}

void show_ar(int* ar, int size, char element){
	for (int i = 0; i < size; i++){
		std::cout << ar[i] << element;
	}
	std::cout << std::endl;
}

void show_Big_ar(int* ar, int size, char element){
	int count;
	for (int k = 1; k < size; k+=count){
		std::cout << ar[k-1] << element;
		for (int i = k; (i < 9+k) && ar[i-1]==ar[i]; i++){
			std::cout << ar[i] << element;
		}
		count = get_Count_Number(ar, size, ar[k]);
		if (count > 10)
			std::cout << "- " << count-10 << element;
	}
	std::cout << std::endl;
}

void swap(int &a, int &b){
	int c = b;
	b = a;
	a = c;
}

int max_ind(int* ar, int left_front, int right_front){
	int maxx = left_front;
	for (int i = left_front; i < right_front; i++){
		if (ar[i] > ar[maxx])
			maxx = i;
	}
	return maxx;
}

int min_ind(int* ar, int left_front, int right_front){
	int minn = left_front;
	for (int i = left_front; i < right_front; i++){
		if (ar[i] < ar[minn])
			minn = i;
	}
	return minn;
}

int get_Count_Number(int* ar, int size, int number){
    int count = 0;
    for(int i = 0; i < size; count+=(ar[i]==number), i++);
    return count;
}
