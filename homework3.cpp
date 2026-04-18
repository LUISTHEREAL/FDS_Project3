#include <iostream>
#include <vector>
using namespace std;

int main()
{
    void buildhep(vector<int>&data, int size, int start)
    {
        int smallest = start;
        int leftChild = 2 * start + 1;
        int rightChild = 2 * start + 2;

        if (leftChild < size && data[leftChild] < data[smallest])
            smallest = leftChild;

        if (rightChild < size && data[rightChild] < data[smallest])
            smallest = rightChild;

        if (smallest != start)
        {
            swap(data[start], data[smallest]);
            buildHeap(data, size, smallest);
        }
    };


};

 
