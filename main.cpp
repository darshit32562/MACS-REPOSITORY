#include <bits/stdc++.h>
using namespace std;

#include "bubble.cpp"
#include "insertion.cpp"
#include "selection.cpp"
#include "quick.cpp"
#include "merge.cpp"

void printArray(const vector<int>& arr) {
    for(int x : arr) cout << x << " ";
    cout << endl;
}

vector<int> generateArray(int n) {
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        arr[i] = rand() % 1000;
    return arr;
}

void testSort(string name, vector<int> arr, int (*sortFunc)(vector<int>&)) {
    auto start = chrono::high_resolution_clock::now();
    int it = sortFunc(arr);
    auto end = chrono::high_resolution_clock::now();

    cout << "\n=== " << name << " ===\n";
    printArray(arr);
    cout << "Iterations: " << it;
    cout << " | Time: "
         << chrono::duration<double, milli>(end-start).count()
         << " ms\n";
}

int main() {
    srand(time(0));

    vector<int> arr = generateArray(20);

    cout << "Original Array:\n";
    printArray(arr);

    testSort("Bubble Sort", arr, bubbleSort);
    testSort("Insertion Sort", arr, insertionSort);
    testSort("Selection Sort", arr, selectionSort);
    testSort("Quick Sort", arr, quickSort);
    testSort("Merge Sort", arr, mergeSort);

    return 0;
}
