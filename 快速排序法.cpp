#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int left, int right) {
    int pivot = arr[right];  // 選最後一個元素為樞軸
    int i = left;

    for (int j = left; j < right; j++) {
        if (arr[j] <= pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[right]);
    return i;  // 返回 pivot 的最終位置
}

void quickSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int pi = partition(arr, left, right); // 切分
        quickSort(arr, left, pi - 1);         // 遞迴排序左半
        quickSort(arr, pi + 1, right);        // 遞迴排序右半
    }
}

int main() {
    vector<int> x = {10, 7, 8, 9, 1, 5};
    quickSort(x, 0, x.size() - 1);
    for (auto v : x) cout << v << " ";
    return 0;
}