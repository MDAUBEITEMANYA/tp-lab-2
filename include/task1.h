#ifndef __TASK1_H_
#define __TASK1_H_
#include "string.h"

template <typename T> static bool compare(T &a, T &b){
	return a < b;
}

template <> bool compare(char * &a, char * &b){
	return strlen(a) < strlen(b);
}

template <typename T> void msort(T * array, const int n){
	if (n <= 1) return;

	int right = n / 2; 
	int left = n - right; 

	msort(array, right);
	msort(array + right, left);

	int first = 0; 
	int second = 0;
	int iterator = 0;

	T * result = new T[n];
	while (first < right && second < left){

		if (compare(array[first], array[right + second]))
			result[iterator++] = array[first++];
		else
			result[iterator++] = array[right + second++];
	}

	while (first < right){
		result[iterator++] = array[first++];
	}

	while (second < left){
		result[iterator++] = array[right + second++];
	}

	for (int i = 0; i < n; i++){
		array[i] = result[i];
	}
}
#endif //__TASK1_H_