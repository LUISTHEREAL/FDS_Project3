#include <iostream>
#include <vector>
#include "Quicksort.h"
#include "InsertSort.h"
#include "Heapsort.h"
#include <chrono>


using namespace std;

int main()
{
	// random vectors of set sizes
	vector<int>& arr_10 = new vector<int>();
	vector<int>& arr_100 = new vector<int>();
	vector<int>& arr_1000 = new vector<int>();

	for (int i = 0; i < 10; i++)
		arr_10.push_back(rand());

	for (int i = 0; i < 100; i++)
		arr_100.push_back(rand());
	
	for (int i = 0; i < 1000; i++)
		arr_1000.push_back(rand());

	auto rand10_s = chrono::high_resolution_clock::now();
	QuickSort(arr_10, 0, 9);
	auto rand10_e = chrono::high_resolution_clock::now();

	auto rand100_s = chrono::high_resolution_clock::now();
	QuickSort(arr_100, 0, 99);
	auto rand100_e = chrono::high_resolution_clock::now();

	auto rand1000_s = chrono::high_resolution_clock::now();
	QuickSort(arr_1000, 0, 999);
	auto rand1000_e = chrono::high_resolution_clock::now();

	auto duration_10 = chrono::duration_cast<chrono::microseconds>(rand10_e - rand10s);
	auto duration_100 = chrono::duration_cast<chrono::microseconds>(rand100_e - rand100s);
	auto duration_1000 = chrono::duration_cast<chrono::microseconds>(rand1000_e - rand1000s);

	cout << "Duration for 10 elements: " << duration_10.count() << endl;
	cout << "Duration for 100 elements: " << duration_100.count() << endl;
	cout << "Duration for 1000 elements: " << duration_1000.count() << endl;
};
