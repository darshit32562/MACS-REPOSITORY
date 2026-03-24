#include <bits/stdc++.h>
using namespace std;

int mergeIterations = 0;

void mergeArray(vector<int>& arr, int l, int m, int r) {
    vector<int> temp;
    int i = l, j = m + 1;

    while(i <= m && j <= r) {
        mergeIterations++;
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

void mergeSortHelper(vector<int>& arr, int l, int r) {
    if(l >= r) return;

    int m = (l + r) / 2;
    mergeSortHelper(arr, l, m);
    mergeSortHelper(arr, m + 1, r);
    mergeArray(arr, l, m, r);
}

int mergeSort(vector<int>& arr) {
    mergeIterations = 0;
    mergeSortHelper(arr, 0, arr.size() - 1);
    return mergeIterations;
}
