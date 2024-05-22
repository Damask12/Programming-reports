#include "func.h"

int sequential_search(int *arr, int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // возвращаем индекс элемента, если найден
        }
    }
    return -1; // возвращаем -1, если элемент не найден
}

int binary_search(int *arr, int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return mid; // возвращаем индекс элемента, если найден
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; // возвращаем -1, если элемент не найден
}