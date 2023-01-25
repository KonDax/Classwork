#ifndef _array_hpp_
#define _array_hpp_

#include <iostream>
#include <time.h>

void random_Fill_ar(int*, int, int = 0, int = 255);
void show_ar(int*, int, char = ' ');
void show_Big_ar(int*, int, char = ' ');
void swap(int&, int&);
int max_ind(int*, int, int);
int min_ind(int*, int, int);
int get_Count_Number(int*, int, int);

#endif