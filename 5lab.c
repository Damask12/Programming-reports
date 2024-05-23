//5. проверяет есть ли в массиве отрицательные числа
#include <stdio.h>

int main() {
    int A[] = {1, 2, -3, 4, -145, 5, 6};
    int n = sizeof(A)/sizeof(int);
    int i = 0;
    
    while(A[i] > 0) {
        i++;
        if (i == n) {
            printf("Все числа в массиве положительные\n");
            return 1;
        }
    }
    printf("В массиве содержатся отрицательные числа\n");
    return 0;
}

/*
//15. удаляет простые числа из массива
#include <stdio.h>

int main() {
    int A[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(A) / sizeof(A[0]);

    for (int i = 0; i < n; i++) {
        int osn = 1;
        for (int m = 2; m < A[i]; m++) {
            if (A[i] % m == 0) {
                osn = 0;
                break;
            }
        }
        if (osn) {
            for (int j = i; j < n - 1; j++) {
                A[j] = A[j + 1];
            }
            n--;
            i--;
        }
    }

    printf("массив без простых чисел: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}
*/
/*
//25. выводит индекс элемента у которого колво меньших и больших чисел равны
#include <stdio.h>

int pois(int c[], int n) {
    int i, j, k1, k2;
    for (i = 0; i < n; i++) {
        for (j = k1 = k2 = 0; j < n; j++) {
            if (c[i] != c[j]) {
                if (c[i] < c[j]) k1++; 
                else k2++;
            }
        }
        if (k1 == k2) return i;
    }
    return -1;
}

int main() {
    int c[] = {1,2,3,4,5};
    int n = sizeof(c) / sizeof(c[0]);
    int result = pois(c, n);
    if (result != -1) {
        printf("Индекс элемента: %d \n", result);
    } else {
        printf("Такой элемент не найден\n");
    }
    return 0;
} */
/*
//35. сортировка массива по убыванию методом выбора
#include <stdio.h>

void sort(int A[], int n) {
    int i, k, c;
    while (n != 0) {
        k = 0;
        for (i = 1; i < n; i++) {
            if (A[i] < A[k]) {
                k = i;
            }
        }
        c = A[k];
        A[k] = A[n - 1];
        A[n - 1] = c;
        n--;
    }
}

int main() {
    int A[] = {611, 15 ,85, 546};
    int n = sizeof(A) / sizeof(A[0]);

    sort(A, n);

    printf("Сортированный массив: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}
*/

/*
//45. массив определяет колво переходов из отрицательных значений в положительные
#include <stdio.h>

int main() {
    int A[] = {1, -2, 3, 4, -5, 6, 7, 8, -9, 10};
    int n = sizeof(A) / sizeof(A[0]);
    int s = 0;

    for (int i = 1; i < n; i++) {
        if (A[i] > 0 && A[i - 1] < 0) {
            s++;
        }
    }

    printf("количество переходов из отрицательного в положительное: %d \n", s);
    return 0;
} */

/*
//55. циклический сдвиг влево, тоесть левую часть перемещает на 1 влево, а после этот элемент в правую часть чисел
#include <stdio.h>

int main() {
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(A) / sizeof(A[0]);
    int s = A[0];

    for (int i = 1; i < n; i++) {
        A[i - 1] = A[i];
    }
    A[n - 1] = s;

    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
} */
