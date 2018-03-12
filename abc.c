#include <stdio.h>
int basamakbul(int);
int main()
{
   
    printf("Sayi giriniz:");
    int sayi , boyut;
    scanf("%d",&sayi);
    boyut = basamakbul(sayi);
    int dizi[boyut];
    int kalan, i = 0;
    while(sayi != 0)
    {
        kalan = sayi % 2;
        dizi[i] = kalan;
        sayi = sayi / 2;
        i++;
    }
    for(i = boyut -1; i >= 0; i--)
    printf("%d", dizi[i]);
    return 0;
}
int basamakbul(int sayi10)
{
    int basamak_sayisi = 0;
    while(sayi10 != 0)
    {
        sayi10 = sayi10 / 2;
        basamak_sayisi++;

    }
    printf("%d\n", basamak_sayisi);
    return basamak_sayisi;
}