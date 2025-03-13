#include <stdio.h>
#include <stdlib.h>

// Program utama
int main() {

    printf("Masukan bilangan 7 sebagai elemen pertama {insert first}\n");
    insertFirst(7);

    printf("Masukan bilangan 11 sebagai elemen kedua {insert last}\n");
    insertLast(11);
    
    printf("Masukan bilangan 9 diantara bilangan 7 dan 11 {insert after}\n");
    insertAfter(7, 9);

    printf("masukan bilangan 5 di awal list {insert first}\n");
    insertFirst(5);

    printf("Masukan bilangan 13 di akhir list {insert last}\n");
    insertLast(13);
    
    return 0;
}




