#include <bits/stdc++.h>
using namespace std;

void mergeArray(vector<int>& arr, int l, int m, int r, int &iterations) {
    vector<int> temp;
    int i = l, j = m + 1;

    while(i <= m && j <= r) {
        iterations++;
        if(arr[i] <= arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }

    while(i <= m) temp.push_back(arr[i++]);
    while(j <= r) temp.push_back(arr[j++]);

    for(int k = 0; k < temp.size(); k++)
        arr[l + k] = temp[k];
}

void mergeSortHelper(vector<int>& arr, int l, int r, int &iterations) {
    if(l >= r) return;

    int m = (l + r) / 2;
    mergeSortHelper(arr, l, m, iterations);
    mergeSortHelper(arr, m + 1, r, iterations);
    mergeArray(arr, l, m, r, iterations);
}

int mergeSort(vector<int>& arr) {
    int iterations = 0;
    mergeSortHelper(arr, 0, arr.size() - 1, iterations);
    return iterations;
}
