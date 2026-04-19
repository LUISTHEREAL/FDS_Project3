#pragma once
#include <vector>
#include "Swap.h"
#include <cmath>

const unsigned short MIN_LENGTH = 10, MAX_DEPTH = 10;


int Partition_1(vector<int>& arr, int low, int high) {
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
			Swap(arr[++i], arr[j]);
		}
	}

	// move pivot at the end of the array
	// and return its last position
	Swap(arr[i + 1], arr[high]);
	return i + 1;
}

int Partition_2(vector<int>& arr, int low, int high) {
	// choose a pivot
	// use middle element as pivot
	int pivot = low + (high - low) / 2;

	// set middle element as last
	// to reuse the previous algorithm
	Swap(arr[pivot], arr[high]);

	// reuse algorithm
	return Partition_1(arr, low, high);
}

int Partition_3(vector<int>& arr, int low, int high) {
	// use avg as pivot
	float sum = 0;

	for (int el : arr) sum += el;

	sum /= high - low;

	// find closest element to avg
	// and its index
	float smallest_distance = INT_MAX;
	int i = 0;
	for (int j = low; j < high; j++)
		if (abs(arr[j] - sum) < smallest_distance) {
			smallest_distance = abs(earr[j] - sum);
			i = j;
		}

	// reuse algorithm
	Swap(arr[i], arr[high]);
	return Partition_1(arr, low, high);
}

void QuickSort(vector<int>& arr, int low, int high, int i = 0) {
	if (i > MAX_DEPTH) {
		// switch to heapSort
	}
	else if (high - low < MIN_LENGTH) {
		int partitionIndex = Partition_1(arr, low, high);

		// call recursively for both smaller and bigger elements
		QuickSort(arr, low, partitionIndex - 1);
		QuickSort(arr, partitionIndex + 1, high);
	}
	else {
		// switch to insertionSort
	}
}
