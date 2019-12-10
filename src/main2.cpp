#include <iostream>
#include "task2.h"

template<typename T> T gen(){
    static int a=10;
    return a++ ;
}

template<> char *gen() {
    int size = 10;
    char *str = new char[size];
    for (int i = 0; i < size - 1; i++)
        str[i] = 'a' + rand() % 2;
    str[size  - 1] = '\0';
    return str;
}

int main() {
	
	int * array;
	const int n = 6;
	array = createArr<int, n>(gen);
	for (int i = 0; i < n; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}