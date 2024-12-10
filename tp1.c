#include<stdio.h>

int main() {
    int matrix[5][5];
    int value = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matrix[i][j] = value++;
        }
    }
    printf("La matrice complète:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nLes valeurs des lignes paires:\n");
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < 5; j++) {
                printf("%d\t", matrix[i][j]);
            }
            printf("\n");
        }
    }
    printf("\nLes valeurs des lignes impaires:\n");
    for (int i = 0; i < 5; i++) {
        if (i % 2 != 0) {
            for (int j = 0; j < 5; j++) {
                printf("%d\t", matrix[i][j]);
            }
            printf("\n");
        }
    }
    printf("\nLes valeurs sur la diagonale principale:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t", matrix[i][i]);
    }
    printf("\n");
    printf("\nLes valeurs sur la diagonale secondaire:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t", matrix[i][4 - i]);
    }
    printf("\n");

    return 0;
}



#include <stdio.h>

int main() {
    int T[10][10];
    int i, j, size, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("Enter T[%d][%d]: ", i, j);
            scanf("%d", &T[i][j]);
        }
    }
    printf("\nOriginal array:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d\t", T[i][j]);
        }
        printf("\n");
    }
    for (i = 1; i < size; i++) {
        for (j = 0; j < i; j++) {
            temp = T[i][j];
            T[i][j] = T[j][i];
            T[j][i] = temp;
        }
    }
    printf("\nReversed array:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d\t", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}
