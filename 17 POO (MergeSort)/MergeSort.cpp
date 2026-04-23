#ifndef MERGESORT_H
#define MERGESORT_H

#include <iostream>
#include <vector>
#include <string>

class MergeSort {
public:
    template<typename T>
    void mergeSort(T arr[], int l, int r);

private:
    template<typename T>
    void mergeRange(T arr[], int l, int m, int r);
};

#include "MergeSort.cpp"
#endif
