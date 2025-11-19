#include <iostream>
using namespace std;

// int binarySearch(int data[], int n, int target){     // Iterative Version
//     int begin = 0, end = n - 1;
//     while(begin <= end){
//         int middle = (begin + end) / 2;
//         if (data[middle] == target) return middle;
//         else if(data[middle] > target) end = middle - 1;
//         else begin = middle + 1;
//     }
//     return -1;
// }

int binarySearch(int data[], int target, int begin, int end){   // Recursive Version
    if (begin > end) return -1;
    else{
        int middle = (begin + end) / 2;
        if(data[middle] == target) return middle;
        else if (data[middle] > target){
            return binarySearch(data, target, begin, middle - 1);
        }
        else{
            return binarySearch(data, target, middle + 1, end); 
        }
    }
}

// bool twoSum(int data[], int n, int k){
//     int begin = 0, end = n - 1;
//     while(begin < end){
//         if (data[begin] + data[end] == k) { return true; }
//         else if (data[begin] + data[end] < k) { begin++; }
//         else end--;
//     }
//     return false;
// }

bool twoSum(int data[], int begin, int end, int k){
    if (begin >= end) return false;
    else{
        if (data[begin] + data[end] == k) { return true; }
        else if (data[begin] + data[end] < k) { return twoSum(data, begin + 1, end, k); }
        else { return twoSum(data, begin, end - 1, k); }
    }
}

 