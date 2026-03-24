#include <bits/stdc++.h>
using namespace std;

int quickIterations = 0;

int partitionArray(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++) {
        quickIterations++;
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[high]);
    return i+1;
}

void quickSortHelper(vector<int>& arr, int low, int high) {
    if(low < high) {
        int pi = partitionArray(arr, low, high);
        quickSortHelper(arr, low, pi - 1);
        quickSortHelper(arr, pi + 1, high);
    }
}

int quickSort(vector<int>& arr) {
    quickIterations = 0;
    quickSortHelper(arr, 0, arr.size() - 1);
    return quickIterations;
}
