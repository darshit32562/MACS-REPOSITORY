#include <bits/stdc++.h>
using namespace std;
int selectionSort(vector<int>& arr) {
    int n = arr.size();
    int iterations = 0;
    for(int i = 0; i < n-1; i++) {
        int minIndex = i;
        for(int j = i+1; j < n; j++) {
            iterations++;
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    return iterations;
}
