#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    char groupNumber;
    int grades[3];
};

int main() {
    FILE *file;
    struct Student student;

    char operation;

    do {
        printf("select file operation:\n");
        printf("a) add a record to a file or start recording a new file\n");
        printf("b) start processing the created file\n");
        scanf(" %c", &operation);

        switch(operation) {
            case 'a':
                file = fopen("Wedomost.dat", "a");
                if(file == NULL) {
                    printf("file opening error\n");
                    return -1;
                }

                printf("Enter the student's surname and initials: ");
                scanf("%s", student.name);
                printf("enter group number: ");
                scanf("%s", &student.groupNumber);
                printf("enter grades for three subjects: ");
                int i;
                for(i = 0; i < 3; i++) {
                    scanf("%d", &student.grades[i]);
                }

                fwrite(&student, sizeof(struct Student), 1, file);
                fclose(file);
                break;

            case 'b':
                file = fopen("Wedomost.dat", "r");
                if(file == NULL) {
                    printf("file not found \n");
                    return -1;
                }

                int found = 0;
                while(fread(&student, sizeof(struct Student), 1, file) == 1) {
                	int i;
                    for(i = 0; i < 3; i++) {
                        if(student.grades[i] == 2) {
                            found = 1;
                            break;
                        }
                    }
                }

                if(found) {
                    printf("students with grade '2' found\n");
                } else {
                    printf("students with grade '2' not found\n");
                }

                fclose(file);
                break;

            default:
                printf("invalid operation\n");
                break;
        }

    } while(operation == 'a' || operation == 'b');

    return 0;
}

