#include <stdio.h>

// Nama    : M. Maulana Gian Pranaja
// NIM     : L0123077
// Kelas   : C
// shift + alt +
// disini tipe dari input adalah float
// ketika menginput sebuah nilai kedalamnya jika input yg dimasukan dari skala 0-100 maka akan lanjut di eksekusi kedalam
// if ,else if. tetapi jika input yg dimasukan adalah diluar skala 1-100 maka akan dieksekusi di while loop, output akan
// selalu mengulang jika input yg dimasukan tidak dalam skala 1-100 misalnya nilai minus atau lebih dari 100.
// jika nilai input sudah benar maka lanjut eksekusi di bagian if, else if. dibagian itu akan dicek dari nilai input yg
// dimasukan dalam skala 0-100. jika sudah memenuhi ketentuan maka akan dieksekusi pd bagian tertentu tergantung dari
// nilai input (0-100).

int main()
{

    float input;
    printf("masukan nilai kamu (dari 0 - 100) : ");
    scanf("%f", &input);

    while (input < 0 || input > 100)
    {
        printf("input anda salah\n");
        printf("masukan nilai kamu (dari 0 - 100) : ");
        scanf("%f", &input);
    }

    if (input >= 85 && input <= 100)
    {
        printf("nilai kamu A\n");
        while (input >= 85 && input <= 100)
        {
            printf("kamu mendapatkan nilai ipk dengan skala 4.00");
            break;
        }
    }
    else if (input >= 80 && input <= 84)
    {
        printf("nilai kamu A-");
        while (input >= 80 && input <= 84)
        {
            printf("kamu mendapatkan nilai ipk dengan skala 3.70");
            break;
        }
    }
    else if (input >= 75 && input <= 79)
    {
        printf("nilai kamu B+");
        while (input >= 75 && input <= 79)
        {
            printf("kamu mendapatkan nilai ipk dengan skala 3.30");
            break;
        }
    }
    else if (input >= 70 && input <= 74)
    {
        printf("nilai kamu B");
        while (input >= 70 && input <= 74)
        {
            printf("kamu mendapatkan nilai ipk dengan skala 3.00");
            break;
        }
    }
    else if (input >= 65 && input <= 69)
    {
        printf("nilai kamu C+");
        while (input >= 65 && input <= 69)
        {
            printf("kamu mendapatkan nilai ipk dengan skala 2.70");
            break;
        }
    }
    else if (input >= 60 && input <= 64)
    {
        printf("nilai kamu C");
        while (input >= 60 && input <= 64)
        {
            printf("kamu mendapatkan nilai ipk dengan skala 2.00");
            break;
        }
    }
    else if (input >= 55 && input <= 59)
    {
        printf("nilai kamu D");
        while (input >= 55 && input <= 59)
        {
            printf("kamu mendapatkan nilai ipk dengan skala 1.00");
            break;
        }
    }
    else
    {
        printf("nilai kamu F");
        while (input >= 0 && input < 55)
        {
            printf("kamu mendapatkan nilai ipk dengan skala 0.00");
            break;
        }
    }

    return 0;
}
