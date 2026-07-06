#include <stdio.h>

int main(){
    int A, B, C;

    printf("Masukan angka yang kamu inginkan: \n");
    printf("Angka pertama: ");
    scanf("%d", &A);
    printf("Angka kedua: ");
    scanf("%d", &B);
    printf("Angka ketiga: ");
    scanf("%d", &C);
    int avg = (A + B + C) / 3;
    printf("\n The result average of %d, %d, %d is %d", A, B, C, avg);
}
