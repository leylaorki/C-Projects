#include <stdio.h>
int main() {
    int satir, sutun, kenar;
    int secim;
    printf("**** MENU ****");
    printf("\n1-Dik Ucgen");
    printf("\n2-Kare");
    printf("\n3-Dikdortgen");
    printf("\n4-Piramit\n");
    printf("Sekil Seciniz: ");
    if (scanf("%d", &secim) != 1) {
        printf("Hatali giris!");
        return 1;
    }


    if (secim == 1) {
        printf("Ucgen yüksekligini giriniz: ");
        if (scanf("%d", &satir) != 1) {
            printf("Hatali giris!");
            return 1;
        }
        if (satir<=0 ) {
            printf("Gecersiz sayi girdiniz!");
            return 1;
        }else {
           for (int i=1; i<=satir; i++) {
            for (int j=1; j<=i;j++) {
                printf("* ");
            }
            printf("\n");
        }
        }
    }

    else if (secim == 2) {
        printf("kenar uzunlugu seciniz: ");
        if (scanf("%d", &kenar) != 1) {
            printf("Hatali giris!");
            return 1;
        }
        if (kenar<=0) {
            printf("Gecersiz sayi girdiniz!");
            return 1;
        }
        else {
            for (int i=1; i<=kenar; i++) {
            for (int j=1; j<=kenar; j++) {
                printf("* ");
            }
            printf("\n");
        }
        }
    }
    else if (secim == 3 ) {
        printf("Satir sayisini giriniz: ");
        if (scanf("%d", &satir) != 1) {
            printf("Hatali giris!");
            return 1;
        }
        printf("Sutun sayisini giriniz: ");
        if (scanf("%d", &sutun) != 1) {
            printf("Hatali giris!");
            return 1;
        }
        if (satir<=0 || sutun<=0) {
            printf("Gecersiz sayi girdiniz!");
            return 1;
        } else {
            for (int i=1; i<=satir; i++) {
            for (int j=1; j<=sutun; j++) {
                printf("* ");
            }
            printf("\n");
        }
        }
    }

    else if (secim == 4) {
        printf("Piramit yuksekligini giriniz: ");
        if (scanf("%d", &satir) != 1) {
            printf("Hatali giris!");
            return 1;
        }
        if (satir<=0) {
            printf("Gecersiz sayi girdiniz!");
            return 1;
        } else {
            for (int i=1; i<=satir; i++) {
                for (int bosluk = 1; bosluk<=satir-i; bosluk++) {
                    printf(" ");
                }
                for (int yildiz=1; yildiz<=(2*i-1); yildiz++) {
                    printf("*");
                }
                printf("\n");
            }
        }
    }
    else {
        printf("Gecersiz secim!");
    }
    return 0;
}