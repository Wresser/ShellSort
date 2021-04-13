#include <cstdlib>
#include <algorithm>  


void selectionSort(int* array, int size) {
	int i, j, imin;
	for (i = 0; i < size - 1; i++) {
		imin = i;   //get index of minimum data
		for (j = i + 1; j < size; j++)
			if (array[j] < array[imin])
				imin = j;
		//placing in correct position
		std::swap(array[i], array[imin]);
	}
}

int main()
{
	const int N = 100000;
	int arr[N];
	srand(1);
	for (int i = 0;i < N; i++)
		arr[i] = rand();
	selectionSort(arr, N);
	return 0;
}