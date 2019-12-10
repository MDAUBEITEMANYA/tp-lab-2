#ifndef __TASK3_H
#define __TASK3_H

template<typename T, int n>
void map(T *array, T(*change)(T)) {
	for (int i = 0; i < n; i++) {
		array[i] = change(array[i]);
	}
}

#endif //__TASK3_H