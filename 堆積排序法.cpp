#include <bits/stdc++.h>
using namespace std;

// 維護以 i 為根的 max-heap
void heapify(vector<int>& arr, int n, int i) {
    int largest = i;          // 1. 假設目前最大是 root
    int left = 2*i + 1;       // 2. 左子
    int right = 2*i + 2;      //    右子

    // 3. 找三者最大
    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    // 4. 如果最大不是 root → 交換並遞迴
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// Heap Sort
void heapSort(vector<int>& arr) {
    int n = arr.size();

    // 1. 建立 max heap
    for (int i = n/2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    // 2. 一個一個取出最大值
    for (int i = n - 1; i > 0; i--) {
        // 把最大值（root）放到最後
        swap(arr[0], arr[i]);

        // 3. 縮小 heap，重新 heapify
        heapify(arr, i, 0);
    }
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};

    heapSort(arr);

    for (auto v : arr) cout << v << " ";
    return 0;
}