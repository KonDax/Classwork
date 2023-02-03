#include "recursive.hpp"

int fact(int n){
	if (n == 1)
		return 1;
	return n * fact(n-1);
}

int range(int n){
	if (n == -1)
		return 0;
	std::cout << range(--n) << " ";
	return n+2;
}

int un_range(int n){
	std::cout << n << " ";
	if (n == 0)
		return 0;
	return un_range(--n);
}

int get_max(int* ar, int size, int maxx){
	if (maxx < ar[size-1])
		maxx = ar[size-1];
	if (size == 1)
		return maxx;
	return get_max(ar, --size, maxx);
}

int get_min(int* ar, int size, int minn){
	if (minn > ar[size-1])
		minn = ar[size-1];
	if (size == 1)
		return minn;
	return get_min(ar, --size, minn);
}
