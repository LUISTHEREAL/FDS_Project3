#pragma once

class InsertSort{
void insertionSort(vector<int>& numb, int left, int right)
{
    int j;
    for (int i = left + 1; i <= right; i++)
    {
        int temp = numb[i];  
        for (j = i; j > left && temp < numb[j - 1]; j--) {
            numb[j] = numb[j - 1];
        };
        numb[j] = temp;

    }
}
};
