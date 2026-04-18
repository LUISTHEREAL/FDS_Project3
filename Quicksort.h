#pragma once
#include <vector>

const unsigned short MIN_LENGTH = 10, MAX_DEPTH = 10;


void Swap(int* a, int* b) {
	int* temp = a;
	a = b;
	b = temp;
}

int Partition(vector<int>& arr, int low, int high) {
	// choose a pivot
	int pivot = arr[high];

	// keep track of index of right pivot
	// assume all elements are larger than pivot
	// and it's outside of the array by default
	int i = low - 1;

	// traverse arr and move
	// all elements < pivot
	// on the left side
	for (int j = low; j <= high - 1; j++) {
		if (arr[j] < pivot) {
			Swap(arr[i++], arr[j]);
		}
	}

	// move pivot at the end of the array
	// and return its last position
	Swap(arr[i + 1], arr[high]);
	return i + 1;
}

void QuickSort(vector<int>& arr, int low, int high, int i = 0) {
	if (i > MAX_DEPTH) {
		// switch to heapSort
	}
	else if (high - low < MIN_LENGTH) {
		int partitionIndex = Partition(arr, low, high);

		// call recursively for both smaller and bigger elements
		QuickSort(arr, low, partitionIndex - 1);
		QuickSort(arr, partitionIndex + 1, high);
	}
	else {
		// switch to insertionSort
	}
}
