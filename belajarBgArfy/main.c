#include <stdio.h>
#include "hitung.c"

int main() {
    int angkaPertama = 20;
    int angkaKedua = 30;
    int hasil = jumlah(angkaPertama, angkaKedua);
    printf("Hasil: %d\n", hasil);
}
