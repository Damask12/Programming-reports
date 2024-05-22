#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// переворот строки
void reverseString(char* str) {
    int length = strlen(str);
    int i;
    for(i=0; i<length/2; i++) {
        char temp = str[i];
        str[i] = str[length-i-1];
        str[length-i-1] = temp;
    }
}

int main() {
    FILE *fileIn, *fileOut;
    char line[100];

    // открываем файл для чтения
    fileIn = fopen("input.txt", "r");
    if (fileIn == NULL) {
        printf("file opening error \n");
        return 1;
    }

    // открываем файл для записи
    fileOut = fopen("output.txt", "w");
    if (fileOut == NULL) {
        fclose(fileIn);
        printf("error opening file for writing \n");
        return 1;
    }

    // считываем строки и переворачиваем слова и записываем в новый файл
    while(fgets(line, 100, fileIn) != NULL) {
        char* word = strtok(line, " \n");
        while(word != NULL) {
            reverseString(word);
            fprintf(fileOut, "%s ", word);
            word = strtok(NULL, " \n");
        }
        fprintf(fileOut, "\n");
    }

    printf("Processing is complete. The result  in output.txt \n");

    // закрытие
    fclose(fileIn);
    fclose(fileOut);

    return 0;
}
