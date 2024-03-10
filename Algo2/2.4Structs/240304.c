#include <stdio.h>
#include <stdbool.h> // Include this header for boolean type

struct Ogrenci {
    int No;
    char Ad[50];
    char Soyad[50];
    bool Cinsiyet; // Assuming bool is supported by your compiler
    float GenelOrtalama;
};

int main() {
    struct Ogrenci ogr;

    printf("Öğrenci Bilgisini giriniz Ogrenci No\n");
    scanf("%d", &ogr.No);

    printf("Öğrenci Bilgisini giriniz Ad\n");
    scanf("%s", ogr.Ad);

    printf("Öğrenci Bilgisini giriniz Soyad\n");
    scanf("%s", ogr.Soyad);

    printf("Öğrenci Bilgisini giriniz Cinsiyet (0 for false, 1 for true)\n");
    scanf("%d", &ogr.Cinsiyet); // Reading an integer

    printf("Öğrenci Bilgisini giriniz Genel Ortalama\n");
    scanf("%f", &ogr.GenelOrtalama);

    // Example of usage:
    printf("Öğrenci No: %d\n", ogr.No);
    printf("Ad: %s\n", ogr.Ad);
    printf("Soyad: %s\n", ogr.Soyad);
    printf("Cinsiyet: %s\n", ogr.Cinsiyet ? "Erkek" : "Kadın");
    printf("Genel Ortalama: %.2f\n", ogr.GenelOrtalama);

    return 0;
}
