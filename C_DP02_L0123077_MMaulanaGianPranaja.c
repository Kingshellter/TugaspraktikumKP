#include <stdio.h>
// M. Maulana Gian Pranaja
// L0123077
// Kelas C
int main()
{
    // pengulangan dan password
    int pass, pilihan;
    char ulang;
    // case 1 (penjumlahan)
    int a, b, c;
    // case 2 (pengurangan)
    int d, e, f;
    // case 3 (looping for)
    int angka;
    char name[100];
    // case 4 (nilai)
    float input;
    char ulangn;
    // case 5 (keliling bangun)
    int pilki;
    int sp, kp, spp, kpp, lpp;
    float dl, kl;
    char ulangk;
    // case 6 (luas bangun)
    int pilu;
    int spl, lp, ppl, lpl, lupp;
    float rl, ll;
    char ulangl;

    //password untuk main menu 1000 & untuk ester egg 2023
    printf("password : 1000 \npassword? : 2023\n");

    do
    {
        //input password
        printf("silahkan masukan password : ");
        scanf("%d", &pass);

        //output jika password 1000
        if (pass == 1000)
        {
            printf("==================================================[SELAMAT DATANG]==================================================\n");
            printf("selamat datang tuanku Mr. Gian\nada yang bisa saya bantu?\n");
            printf("1. Penjumlahan \n2. Pengurangan \n3. spam \n4. Input Nilai \n5. Mencari Keliling \n6. Mencari Luas \n");
            printf("pilih : ");
            scanf("%d", &pilihan);
        }
        //output jika password 2023
        else if (pass == 2023)
        {
            printf("|^^^^^^^^^^^|||____\n");
            printf("| you found eggs |||""'|""b__,_\n");
            printf("| _____________ l||__|__|__|)\n");
            printf("...|(@)(@)""""""-**|(@)(@)**|(@)\n");
            printf("====================================================================================================\n");
        }
        //output jika salah dalam input / tidak terdefinisi
        else
        {
            printf("input salah\n");
        }

        //pilihan yg berada di output main menu
        switch (pilihan)
        {
        //penjumlahan
        //dimana nanti kita memasukan angka pada int a = angka 1 dan b = angka 2. lalu akan dieksekusi c=a+b dan akan munculhasilnya
        case 1:
            printf("==================================================[Penjumlahan]==================================================\n");
            printf("masukan angka 1 : ");
            scanf("%d", &a);
            printf("masukan angka 2 : ");
            scanf("%d", &b);
            c = a + b;
            printf("hasil : %d\n", c);
            break;

        //pengurangan
        //sama seperti pengurangan hanya saja beda tanda. untuk angka pertama yaitu int d dan angka kedua int e. lalu akan dieksekusi f=d-e dan akan muncul hasilnya
        case 2:
            printf("==================================================[Pengurangan]==================================================\n");
            printf("masukan angka 1 : ");
            scanf("%d", &d);
            printf("masukan angka 2 : ");
            scanf("%d", &e);
            f = d - e;
            printf("hasil : %d\n", f);
            break;

        //looping for untuk spam. dimana nanti kita memasukan kata kata yang ingin di eksekusi dan juga mau dieksekusi berapa kali
        case 3:
            printf("==================================================[Spam]==================================================\n");
            printf("masukan nama : ");
            scanf("%s", name);
            printf("ingin mengulang brp kali? : ");
            scanf("%d", &angka);
            for (int i = 0; i < angka; i++)
            {
                printf("%s\n", name);
            }
            break;

        //untuk case 4 aku kasih tugas 1. sama saja seperti penjelasan di tugas pertama, hanya saja sekarang codenya didalam case 4 dan do while loop
        case 4:
            do
            {
                printf("==================================================[Identifikasi Nilai]==================================================\n");
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
                        printf("kamu mendapatkan nilai ipk dengan skala 4.00\n");
                        break;
                    }
                }
                else if (input >= 80 && input <= 84)
                {
                    printf("nilai kamu A-\n");
                    while (input >= 80 && input <= 84)
                    {
                        printf("kamu mendapatkan nilai ipk dengan skala 3.70\n");
                        break;
                    }
                }
                else if (input >= 75 && input <= 79)
                {
                    printf("nilai kamu B+\n");
                    while (input >= 75 && input <= 79)
                    {
                        printf("kamu mendapatkan nilai ipk dengan skala 3.30\n");
                        break;
                    }
                }
                else if (input >= 70 && input <= 74)
                {
                    printf("nilai kamu B\n");
                    while (input >= 70 && input <= 74)
                    {
                        printf("kamu mendapatkan nilai ipk dengan skala 3.00\n");
                        break;
                    }
                }
                else if (input >= 65 && input <= 69)
                {
                    printf("nilai kamu C+\n");
                    while (input >= 65 && input <= 69)
                    {
                        printf("kamu mendapatkan nilai ipk dengan skala 2.70\n");
                        break;
                    }
                }
                else if (input >= 60 && input <= 64)
                {
                    printf("nilai kamu C\n");
                    while (input >= 60 && input <= 64)
                    {
                        printf("kamu mendapatkan nilai ipk dengan skala 2.00\n");
                        break;
                    }
                }
                else if (input >= 55 && input <= 59)
                {
                    printf("nilai kamu D\n");
                    while (input >= 55 && input <= 59)
                    {
                        printf("kamu mendapatkan nilai ipk dengan skala 1.00\n");
                        break;
                    }
                }
                else
                {
                    printf("nilai kamu F\n");
                    while (input >= 0 && input < 55)
                    {
                        printf("kamu mendapatkan nilai ipk dengan skala 0.00\n");
                        break;
                    }
                }
                //disini adalah command do while loop dimana jika menulis y maka akan diulang dari command awal do diatas, jika n maka akan mengakhiri command
                //disini juga menggunakan if, else if untuk membantu do while loop dalam looping (menginputkan y/n) dan dibreak agar input n berjalan.
                //while(1) untuk mengulang do while brp kali.
                printf("ulang input nilai? (y/n) : ");
                scanf("%s", &ulangn);
                if (ulangn == 'y')
                {
                }
                else if (ulangn == 'n')
                {
                    break;
                }
            } while (1);
            break;

        //mencari keliling
        //didalam case 5 terdapat main menu. terdapat pilihan dari 1-3 yaitu untuk mencari keliling sebuah bangun
        case 5:
            do
            {
                if (pilihan == 5)
                {
                    printf("==================================================[Keliling]==================================================\n");
                    printf("bangun : \n");
                    printf("1. Persegi \n2. Persegi Panjang \n3. Lingkaran \n");
                    printf("pilih : ");
                    scanf("%d", &pilki);
                }
                else
                {
                    printf("pilihan tidak ditemukan");
                }
                switch (pilki)
                {
                case 1:
                    printf("masukan sisi persegi : ");
                    scanf("%d", &sp);
                    kp = sp * 4;
                    printf("keliling persegi adalah : %d\n", kp);
                    break;

                case 2:
                    printf("masukan panjang persegi panjang : ");
                    scanf("%d", &spp);
                    printf("masukan lebar persegi panjang : ");
                    scanf("%d", &lpp);
                    kpp = 2 * (spp + lpp);
                    printf("keliling persegi panjang adalah : %d\n", kpp);
                    break;

                case 3:
                    printf("masukan diameter lingkaran : ");
                    scanf("%f", &dl);
                    kl = dl * 3.14;
                    printf("keliling lingkaran adalah : %f\n", kl);
                    break;
                }
                //disini adalah command do while loop dimana jika menulis y maka akan diulang dari command awal do diatas, jika n maka akan mengakhiri command
                //disini juga menggunakan if, else if untuk membantu do while loop dalam looping (menginputkan y/n) dan dibreak agar input n berjalan.
                //while(1) untuk mengulang do while brp kali.
                printf("belum puas?, ingin mengulang (y/n) : ");
                scanf("%s", &ulangk);
                if (ulangk == 'y')
                {
                }
                else if (ulangk == 'n')
                {
                    break;
                }
            } while (1);
            break;
        
        //mencari luas
        //didalam case 6 terdapat main menu. terdapat pilihan dari 1-3 yaitu untuk mencari luas sebuah bangun
        case 6:
            do
            {
                if (pilihan == 6)
                {
                    printf("==================================================[Luas]==================================================\n");
                    printf("bangun : \n");
                    printf("1. persegi \n2. persegi panjang \n3. lingkaran \n");
                    printf("pilih : ");
                    scanf("%d", &pilu);
                }
                else
                {
                    printf("pilihan tidak ditemukan");
                }
                switch (pilu)
                {
                case 1:
                    printf("masukan sisi persegi : ");
                    scanf("%d", &spl);
                    lp = spl * spl;
                    printf("luas persegi adalah : %d\n", lp);
                    break;
                case 2:
                    printf("masukan panjang persegi panjang : ");
                    scanf("%d", &ppl);
                    printf("masukan lebar persegi panjang : ");
                    scanf("%d", &lupp);
                    lpp = ppl * lupp;
                    printf("luas persegi panjang adalah : %d\n", lpp);
                    break;
                case 3:
                    printf("masukan rusuk lingkaran : ");
                    scanf("%f", &rl);
                    ll = 3.14 * rl * rl;
                    printf("luas lingkaran adalah : %f\n", ll);
                    break;
                }
                //disini adalah command do while loop dimana jika menulis y maka akan diulang dari command awal do diatas, jika n maka akan mengakhiri command
                //disini juga menggunakan if, else if untuk membantu do while loop dalam looping (menginputkan y/n) dan dibreak agar input n berjalan.
                //while(1) untuk mengulang do while brp kali.
                printf("belum puas?, ingin mengulang (y/n) : ");
                scanf("%s", &ulangl);
                if (ulangl == 'y')
                {
                }
                else if (ulangl == 'n')
                {
                    break;
                }
            } while (1);
            break;
        }
        //disini adalah command do while loop dimana jika menulis y maka akan diulang dari command awal do diatas, jika n maka akan mengakhiri command
        //disini juga menggunakan if, else if untuk membantu do while loop dalam looping (menginputkan y/n) dan dibreak agar input n berjalan.
        //while(1) untuk mengulang do while brp kali.
        printf("ingin mengulang dari awal? (y/n) : ");
        scanf("%s", &ulang);
        if (ulang == 'y')
        {
        }
        else if (ulang == 'n')
        {
            break;
        }
    } while (1);

    return 0;
}