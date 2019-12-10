#include <iostream>
#include "task3.h"

template <typename T> T change(T b)
{
	return (b+1)*3 ;
}

int main() {
	const int n = 5;
	int array[n] = {57567, 45,6776, 56,5};

	map<int, n>(array, change);

	for (int i = 0; i < n; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;

}