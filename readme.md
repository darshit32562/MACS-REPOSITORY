## 📊 Sorting Algorithms Time Complexity Analysis

### 🔹 Merge Sort

**Recurrence Relation:**
T(n) = 2T(n/2) + O(n)

**Using Master Theorem:**
a = 2, b = 2, f(n) = O(n)  
n^(log_b a) = n^(log₂2) = n  

Case 2: f(n) = Θ(n^(log_b a))

**Final Complexity:**
T(n) = O(n log n)

---

### 🔹 Quick Sort

**Best Case Recurrence:**
T(n) = 2T(n/2) + O(n)

**Using Master Theorem:**
a = 2, b = 2, f(n) = O(n)

**Best Case Complexity:**
O(n log n)

**Worst Case Recurrence:**
T(n) = T(n-1) + O(n)

**Worst Case Complexity:**
O(n²)

**Average Case Complexity:**
O(n log n)

---

### 🔹 Selection Sort

**Work Done:**
T(n) = (n-1) + (n-2) + ... + 1

**Summation:**
T(n) = n(n-1)/2

**Final Complexity:**
O(n²)

**Note:**  
Best, Average, and Worst cases are the same.

---

### 🔹 Bubble Sort

**Worst Case:**
T(n) = (n-1) + (n-2) + ... + 1  
O(n²)

**Average Case:**
O(n²)

**Best Case (Optimized with flag):**
O(n)

---

### 🔹 Insertion Sort

**Worst Case:**
T(n) = (n-1) + (n-2) + ... + 1  
O(n²)

**Average Case:**
O(n²)

**Best Case (Already sorted):**
O(n)

---

## ✨ Key Insights

- Merge Sort always runs in O(n log n) due to equal division  
- Quick Sort can degrade to O(n²) if pivot choice is poor  
- Insertion Sort is efficient for nearly sorted arrays  
- Bubble Sort is mostly educational  
- Selection Sort performs the same regardless of input  
