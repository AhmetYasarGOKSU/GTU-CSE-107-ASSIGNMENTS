#include <stdio.h>

int main() {
    int matrix[3][3]; // 3x3 boyutunda bir 2D array
    int i, j;

    // Kullanıcıdan elemanları alma
    printf("3x3 boyutundaki matrisi doldurunuz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Matrisin elemanlarını yazdırma
    printf("\nGirdiğiniz Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

