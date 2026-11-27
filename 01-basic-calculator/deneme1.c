#include <stdio.h>
int main() {

    double sayi1,sayi2,sonuc;
    int secim;
    printf("Birinci sayiyi giriniz: ");
    scanf("%lf",&sayi1);
    printf("İkinci sayiyi giriniz: ");
    scanf("%lf",&sayi2);

    printf("\n1-toplama\n");
    printf("\n2-cikarma\n");
    printf("\n3-carpma\n");
    printf("\n4-bölme\n");

    printf("Islem Seciniz ");
    scanf("%d",&secim);

    switch (secim)
    {
        case 1:
            sonuc = sayi1 + sayi2;
            printf("sonuc: %.2f\n",sonuc); break;
        case 2:
            sonuc = sayi1-sayi2;
            printf("sonuc: %.2f\n",sonuc); break;
        case 3:
            sonuc = sayi1*sayi2;
            printf("sonuc: %.2f\n",sonuc); break;
        case 4:
            if (sayi2 == 0) {
                printf("Hatalı Giris! Tanımsız bölme islemi"); break;
            } else {
                sonuc =sayi1/sayi2;
                printf("sonuc: %.2f\n",sonuc); break;
            }
        default:
            printf("gecersiz secim!!");
    }
    return 0;
}