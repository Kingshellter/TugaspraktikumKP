#include <stdio.h>

int main() {
    // Jumlah baris dan kolom
    int baris, kolom; 
    // dua array 2D dengan ukuran yang ditentukan    
    int array1[baris][kolom];
    int array2[baris][kolom];

    // meminta untuk memasukkan jumlah baris dan kolom
    printf("Masukkan jumlah baris: ");
    scanf("%d", &baris);
    printf("Masukkan jumlah kolom: ");
    scanf("%d", &kolom);
    printf("artinya nanti anda mengisi setiap array dengan %d baris dan %d kolom\n", baris, kolom);

    // Mengisi array1 dengan input
    printf("Masukkan nilai-nilai untuk array1:\n");
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            scanf("%d", &array1[i][j]);
        }
    }
    // Mengisi array2 dengan input
    printf("Masukkan nilai-nilai untuk array2:\n");
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            scanf("%d", &array2[i][j]);
        }
    }
    // Melakukan operasi penjumlahan pada kedua array
    int hasil[baris][kolom];
    printf("Hasil penjumlahan array1 dan array2:\n");
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            hasil[i][j] = array1[i][j] + array2[i][j];
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }

    return 0;
}