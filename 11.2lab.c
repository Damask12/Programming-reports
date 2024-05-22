#include <stdio.h>
#include <stdlib.h>
int minOtr(int *arr, int size, int min) {
    if (size < 0) {
        return min;
    }
    
    if (arr[size] < 0 && arr[size] < min) {
        min = arr[size];
    }
    
    return minOtr(arr, size-1, min);
}
int main() {
    int size;
    printf("Введите размер массива: ");
    scanf("%d", &size);
    int *arr = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 50 - 50; // случайные числа от -50 до 0
    }
    printf("Массив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    int minimum = minOtr(arr, size-1, 0);
    printf("\nМинимальный элемент среди отрицательных чисел: %d \n", minimum);

    free(arr);
    
    return 0;
}
