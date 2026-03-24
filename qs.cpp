#include <bits/stdc++.h>
using namespace std;
int iterations_q = 0;
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j < high; j++) {
        iterations_q++;
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}
void quickSort1(vector<int>& arr, int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);
        quickSort1(arr, low, pi - 1);
        quickSort1(arr, pi + 1, high);
    }
}
int quickSort(vector<int>& arr) {
    iterations_q = 0;
    quickSort1(arr, 0, arr.size() - 1);
    return iterations_q;
}
