#include "MergeSort.h"

int main() {
    MergeSort ms;
    int arr[5] = {5,2,4,1,3};

    ms.mergeSort(arr,0,4);

    for(int i=0;i<5;i++) std::cout<<arr[i]<<" ";

    return 0;
}
