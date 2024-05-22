#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main(int argc, char *argv[]) {
    //проверка входных данных
    if (argc != 3) {
        printf("Usage: %s <input_file_name> <output_file_name>\n", argv[0]);
        return 1;
    }
    //открытие файла для ввода и вывода
    FILE *file = fopen(argv[1], "r");
    FILE *file_o = fopen(argv[2], "w");

    if (!file) {
        printf("Can't open input file.\n");
        return 1;
    }
    if (!file_o) {
        printf("Can't open output file.\n");
        return 1;
    }
    
    //Считывание файла и выделение памяти
    int size;
    fscanf(file, "%d", &size); 
    int *arr = (int *)malloc(size * sizeof(int));
    int i;

    for (int i = 0; i < size; i++) {
        fscanf(file, "%d", &arr[i]);
    }

    int key = -1;

    //последовательный поиск
    int result_sequential = sequential_search(arr, size, key);
    if (result_sequential != -1) {
        fprintf(file_o, "Sequential Search: Element found at index %d\n", result_sequential);
        printf("Sequential Search: Element found at index %d\n", result_sequential);
    } else {
        fprintf(file_o, "Sequential Search: Element not found\n");
        printf("Sequential Search: Element not found\n");
    }

    //бинарный поиск
    int result_binary = binary_search(arr, 0, size - 1, key);
    if (result_binary != -1) {
        fprintf(file_o, "Binary Search: Element found at index %d\n", result_binary);
        printf("Binary Search: Element found at index %d\n", result_binary);
    } else {
        fprintf(file_o, "Binary Search: Element not found\n");
        printf("Binary Search: Element not found\n");
    }

    //освобождение памяти, закрытие файлов
    free(arr);
    fclose(file);
    fclose(file_o);

    return 0;
}