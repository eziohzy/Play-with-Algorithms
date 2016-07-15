#include <iostream>
#include "SortTestHelper.h"

using namespace std;

template<typename T>
void selectionSort(T arr[], int n){

    for(int i = 0 ; i < n ; i ++){

        int minIndex = i;
        for( int j = i + 1 ; j < n ; j ++ )
            if( arr[j] < arr[minIndex] )
                minIndex = j;

        swap( arr[i] , arr[minIndex] );
    }
}

int main() {

    // 测试排序算法辅助函数
    int N = 10000;
    int *arr = SortTestHelper::generateRandomArray(N,0,100000);
    selectionSort(arr,N);
    SortTestHelper::printArray(arr,N);
    delete(arr);

    int *arr2 = SortTestHelper::generateRandomArray(N,0,100000);
    SortTestHelper::testSort("Selection Sort", selectionSort, arr2, N);
    delete(arr2);

    return 0;
}