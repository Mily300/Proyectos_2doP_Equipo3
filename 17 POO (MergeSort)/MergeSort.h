#include "MergeSort.h"

template<typename T>
void MergeSort::mergeRange(T arr[], int l, int m, int r) {
    std::vector<T> temp;
    int i = l, j = m + 1;

    while (i <= m && j <= r)
        temp.push_back(arr[i] < arr[j] ? arr[i++] : arr[j++]);

    while (i <= m) temp.push_back(arr[i++]);
    while (j <= r) temp.push_back(arr[j++]);

    for (int k = 0; k < temp.size(); k++)
        arr[l + k] = temp[k];
}

template<typename T>
void MergeSort::mergeSort(T arr[], int l, int r) {
    if (l >= r) return;
    int m = (l + r) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    mergeRange(arr, l, m, r);
}
