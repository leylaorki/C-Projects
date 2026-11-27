#include <stdio.h>
int main() {
    int sayi1=64;
    int sayi2=0, deneme=0;

    printf("****** SAYI TAHMIN OYUNU ******\n\n");

    while (sayi1 != sayi2 ) {
        printf("1-100 Arasında bir tam sayi tahmin ediniz: ");
        if (scanf("%d", &sayi2) !=1) {
            printf("Geçersiz karakter girişi!!");
            return 1;
        }
        if (sayi2>100 || sayi2<1) {
            printf("Gecersiz sayi girdiniz!");
            return 1;
        }
        deneme++;

        if (sayi2<sayi1) {
            printf("Daha Buyuk Bir Sayi Tahmin Ediniz!\n");
            if (deneme >= 10) {
                printf("Deneme Süreniz Doldu!\n Gizli Sayi=64 :(");
                return 1;
            }
        } else if (sayi2>sayi1) {
            printf("Daha Kucuk Bir Sayi Tahmin Ediniz!\n");
            if (deneme >= 10) {
                printf("Deneme Süreniz Doldu!\n Gizli Sayi=64 :(");
                return 1;
            }
        } else {
            printf("TEBRİKLER! DOGRU TAHMİN :) ");
            printf("\nDeneme sayiniz: %d", deneme);
        }

    }

    return 0;
}