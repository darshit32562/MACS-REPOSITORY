#include <bits/stdc++.h>
using namespace std;

int partitionArray(vector<int>& arr, int low, int high, int &iterations) {
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++) {
        iterations++;
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSortHelper(vector<int>& arr, int low, int high, int &iterations) {
    if(low < high) {
        int pi = partitionArray(arr, low, high, iterations);
        quickSortHelper(arr, low, pi - 1, iterations);
        quickSortHelper(arr, pi + 1, high, iterations);
    }
}

int quickSort(vector<int>& arr) {
    int iterations = 0;
    quickSortHelper(arr, 0, arr.size() - 1, iterations);
    return iterations;
}
