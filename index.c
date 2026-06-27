#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 50

// 函数：查找最大值并返回其索引
int find_max_index(int arr[], int size) {
    if (size <= 0) {
        return -1;  // 无效数组
    }
    
    int max_index = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
    }
    return max_index;
}