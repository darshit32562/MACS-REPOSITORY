#include <bits/stdc++.h>
using namespace std;

#include "bubble.cpp"
#include "insertion.cpp"
#include "selection.cpp"
#include "qs.cpp"
#include "merge.cpp"

void printArray(vector<int>& arr) {
    for(int x : arr) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> arr = {77 , 71 , 51 , 21 , 109 , 557 , 654 , 7 , 93 , 89 , 34 , 1008 , 2708 , 2007 , 79 , 87 , 33 , 8};
    cout << "Original Array: ";
    printArray(arr);
    vector<int> temp;
    // Bubble Sort
    temp = arr;
    auto start = chrono::high_resolution_clock::now();
    int it = bubbleSort(temp);
    auto end = chrono::high_resolution_clock::now();
    cout << "\nBubble Sort: ";
    printArray(temp);
    cout << "Iterations: " << it;
    cout << " | Time: " << chrono::duration<double, milli>(end-start).count() << " ms\n";
    // Insertion Sort
    temp = arr;
    start = chrono::high_resolution_clock::now();
    it = insertionSort(temp);
    end = chrono::high_resolution_clock::now();
    cout << "\nInsertion Sort: ";
    printArray(temp);
    cout << "Iterations: " << it;
    cout << " | Time: " << chrono::duration<double, milli>(end-start).count() << " ms\n";

    // Selection Sort
    temp = arr;
    start = chrono::high_resolution_clock::now();
    it = selectionSort(temp);
    end = chrono::high_resolution_clock::now();
    cout << "\nSelection Sort: ";
    printArray(temp);
    cout << "Iterations: " << it;
    cout << " | Time: " << chrono::duration<double, milli>(end-start).count() << " ms\n";

    // Quick Sort
    temp = arr;
    start = chrono::high_resolution_clock::now();
    it = quickSort(temp);
    end = chrono::high_resolution_clock::now();
    cout << "\nQuick Sort: ";
    printArray(temp);
    cout << "Iterations: " << it;
    cout << " | Time: " << chrono::duration<double, milli>(end-start).count() << " ms\n";

    // Merge Sort
    temp = arr;
    start = chrono::high_resolution_clock::now();
    it = mergeSort(temp);
    end = chrono::high_resolution_clock::now();
    cout << "\nMerge Sort: ";
    printArray(temp);
    cout << "Iterations: " << it;
    cout << " | Time: " << chrono::duration<double, milli>(end-start).count() << " ms\n";

    return 0;
}
