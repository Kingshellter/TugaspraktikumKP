#include <stdio.h>

//fungsi
double plus(double a, double b){
    return a+b;
} 
double minus(double c, double d){
    return c-d;
}
double kali(double e, double f){
    return e*f;
}
double bagi(double g, double h){
    return g/h;
}

//rekursi
int pangkat(int x, int y){
    if(y<=1){
        return x;
    } else {
        return x * pangkat(x,(y-1));
    }
}

int main(){
    double angka1,angka2,hasilp,hasilm,hasilk,hasilb;
    int x,y,z;
    int pilihan;
    char ulang;
    
    do{
    
    printf("1. penjumlahan \n2. pengurangan \n3. perkalian \n4. pembagian \n5. perpangkatan \n");
    printf("pilih : ");
    scanf("%d", &pilihan);

    switch(pilihan){
        case 1 :
        printf("a : ");
        scanf("%lf", &angka1);
        printf("b : ");
        scanf("%lf", &angka2);
        hasilp=plus(angka1,angka2);
        printf("hasil : %lf\n", hasilp);
        break;

        case 2 :
        printf("a : ");
        scanf("%lf", &angka1);
        printf("b : ");
        scanf("%lf", &angka2);
        hasilm=minus(angka1,angka2);
        printf("hasil : %lf\n", hasilm);
        break;

        case 3 :
        printf("a : ");
        scanf("%lf", &angka1);
        printf("b : ");
        scanf("%lf", &angka2);
        hasilk=kali(angka1,angka2);
        printf("hasil : %lf\n", hasilk);
        break;

        case 4 :
        printf("a : ");
        scanf("%lf", &angka1);
        printf("b : ");
        scanf("%lf", &angka2);
        hasilb=bagi(angka1,angka2);
        printf("hasil : %lf\n", hasilb);
        break;

        case 5 :
        printf("angka : ");
        scanf("%d", &x);
        printf("pangkat : ");
        scanf("%d", &y);
        z=pangkat(x,y);
        printf("hasil : %d\n", z);
        break;
    }
        printf("ulang? (y/n) : ");    
        scanf("%s", &ulang);
        if (ulang == 'y')
        {
        }
        else if (ulang == 'n')
        {
            break;
        }
    
    } while (1);
    printf("create by maulana gian");
    return 0;
}