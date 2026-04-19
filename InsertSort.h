#pragma once

class InsertSort{
void insertionSort(vector<int>& numb, int left, int right)
{
    int j;
    for (int i = left + 1; i <= right; i++)
    {
        //saves the current
        int temp = numb[i];
         //shifts to the bigger one also one step to the right
        for (j = i; j > left && temp < numb[j - 1]; j--) {
            numb[j] = numb[j - 1];
        };
        //places it in the correct spot
        numb[j] = temp;

    }
}
};
