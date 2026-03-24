#include <bits/stdc++.h>
using namespace std;
int insertionSort(vector<int>& arr) {
    int n = arr.size();
    int iterations = 0;
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
            iterations++;
        }
        arr[j+1] = key;
    }
    return iterations;
}
