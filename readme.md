# 📊 Sorting Algorithms – Practical Analysis

This project is a hands-on implementation of various sorting algorithms with a focus on understanding their real behavior through:

- Execution time
- Number of iterations
- Output verification

Instead of just theoretical study, this repo helps build **intuition** about how algorithms actually perform.

---

## 🔹 Algorithms Covered

### 🟢 Merge Sort

Merge Sort follows a divide-and-conquer approach where the array is repeatedly divided into halves and then merged in sorted order.

**Recurrence:**
T(n) = 2T(n/2) + O(n)

Since the array is split evenly at each step and merging takes linear time, the complexity becomes:

➡️ **Time Complexity:** O(n log n)  
➡️ **Space Complexity:** O(n)

✔ Performs consistently well regardless of input.

---

### 🔵 Quick Sort

Quick Sort selects a pivot element and partitions the array around it.

**Best / Average Case:**
Balanced partitioning  
➡️ O(n log n)

**Worst Case:**
Highly unbalanced partitions (e.g., already sorted array with bad pivot)  
➡️ O(n²)

✔ Very fast in practice  
⚠️ Performance depends heavily on pivot choice

---

### 🟡 Selection Sort

Selection Sort repeatedly selects the minimum element and places it at the correct position.

**Total comparisons:**
n(n−1)/2

➡️ **Time Complexity:** O(n²)  
➡️ **Space Complexity:** O(1)

✔ Simple and predictable  
❌ Not efficient for large datasets

---

### 🔴 Bubble Sort

Bubble Sort repeatedly swaps adjacent elements if they are in the wrong order.

➡️ **Worst/Average Case:** O(n²)  
➡️ **Best Case (optimized):** O(n)

✔ Easy to understand  
❌ Inefficient in most real scenarios

---

### 🟣 Insertion Sort

Insertion Sort builds the sorted array one element at a time.

➡️ **Worst Case:** O(n²)  
➡️ **Average Case:** O(n²)  
➡️ **Best Case (already sorted):** O(n)

✔ Very efficient for small or nearly sorted data  
✔ Used in hybrid algorithms

---

## ⚙️ What This Project Demonstrates

- Difference between theoretical and practical performance  
- Impact of input size and ordering  
- Comparison of iteration counts across algorithms  
- Use of `chrono` library for time measurement  

---

## 📌 Key Observations

- Merge Sort gives stable and predictable performance  
- Quick Sort is generally fastest but can degrade in edge cases  
- Insertion Sort performs surprisingly well on small datasets  
- Bubble and Selection Sort are mainly useful for learning concepts  

---

## 🚀 Conclusion

Understanding sorting algorithms is not just about memorizing complexities —  
it's about knowing **when and why** to use each one.

This project is aimed at building that intuition.
