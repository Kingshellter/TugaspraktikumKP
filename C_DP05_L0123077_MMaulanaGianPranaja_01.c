#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fungsi untuk mengalokasikan memori
int* my_malloc(int size) {
    int* ptr = (int*)malloc(size * sizeof(int));
    if (ptr == NULL) {
        fprintf(stderr, "Gagal mengalokasikan memori\n");
        exit(1);
    }
    return ptr;
}

// Fungsi untuk membebaskan memori
void my_free(int* ptr) {
    free(ptr);
}

int main() {
    srand(time(NULL)); // Inisialisasi generator angka acak

    int percobaan;
    int x = 0;
    int acaknomor = rand() % 100 + 1;

    printf("Selamat datang di permainan Tebak Angka!\n");
    printf("ingin punya kesempatan berapa kali : ");
    scanf("%d", &percobaan);
    printf("Saya telah memilih sebuah angka antara 1 dan 100. Coba tebak!\n");

    while (x < percobaan) {
        int guess;
        printf("Tebakan Anda: ");
        scanf("%d", &guess);
        x++;
        if (guess == acaknomor) {
            printf("Selamat! Anda berhasil menebak angka %d dalam %d percobaan.\n", acaknomor, x);
            if (x <= 5){
                printf("kamu adalah seorang dukun");
            } else if (x <= 10 || x > 5){
                printf("kamu penebak jenius");
            } else if (x > 10 || x >= 15){
                printf("gak bisa tebak gak usah main");
            } else {
                printf("gak usah main, noob tebak tebakan");
            }
            break;
        } else if (guess < acaknomor) {
            printf("terlalu rendah. Coba lagi.\n");
        } else {
            printf("terlalu tinggi. Coba lagi.\n");
        }
    }

    if (x >= percobaan) {
        printf("percobaan kamu sudah habis. Angka yang benar adalah %d.\n", acaknomor);
    }

    return 0;
}
