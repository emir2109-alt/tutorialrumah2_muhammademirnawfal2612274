#include <stdio.h>

int main(void) {
    float resistansi, tegangan, arus;

    printf("=== Input Data Listrik ===\n");

    printf("Masukkan resistansi (Ohm)  : ");
    scanf("%f", &resistansi);

    printf("Masukkan tegangan (Volt)   : ");
    scanf("%f", &tegangan);

    printf("Masukkan arus (Ampere)     : ");
    scanf("%f", &arus);

    printf("\n=== Data yang Dimasukkan ===\n");
    printf("Resistansi (R) : %.2f Ohm\n", resistansi);
    printf("Tegangan   (V) : %.2f Volt\n", tegangan);
    printf("Arus       (I) : %.2f Ampere\n", arus);

    return 0;
}