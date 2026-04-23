#include "merge.h"
#include <iostream>

int main(){
    int arr[5]={5,2,4,1,3};
    mergeSort(arr,0,4);
    for(int i=0;i<5;i++) std::cout<<arr[i]<<" ";
}
