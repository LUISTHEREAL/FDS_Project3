#pragma once

class Heapsort{
vector<int> data;
public:
void buildhep(vector<int>&data, int size, int first)
 {
     int small = first;
     int left = 2 * first + 1;
     int right = 2 * first + 2;
     //check if left is smaller
     if (left < size && data[left] < data[small])
         small = left;
     //check if right is smaller
     if (right < size && data[right] < data[small])
         small = right;
     //if its smaller swap and then repeate it again
     if (small != first)
     {
         swap(data[first], data[small]);
         buildhep(data, size, small);
     }

 };

 void sortheap(){
     //saves the number of elements 
     int maximum = data.size();
     for(int i = maximum -1; i> 0; i--)
  {
   //moves the smallest to the end  and fixes the rest
   swap(data[i],data[0]);
   buildhep(data, i, 0);
 }
    
};
