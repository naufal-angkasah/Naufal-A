#include <stdio.h>

int main(){
    int a;
    printf("--------------------------------------------------------\n");
    printf("          ***Mengecek Jenis Bilangan Bulat***");
    printf("\n--------------------------------------------------------\n");
    printf("Masukkan Bilangan yang ingin dicek: ");
    scanf("%d", &a);
    if (a % 2 == 1 && a > 0)
    {printf("Nilai termasuk bilangan Ganjil");}
    else if (a % 2 == 0 && a > 0)
    {printf("Nilai termasuk bilangan Genap");}
    else if (a < 0)
    {printf("Nilai termasuk bilangan negatif");} 
    else if (a > 0)
    {printf("\nNilai termasuk bilangan positif");} 
     if (a >= 0)
    {printf("\nNilai termasuk bilangan cacah");}
    else if (a > 0)
    {printf("\nNilai termasuk bilangan asli");}
    if (a > 0)
    {printf("\nNilai mutlaknya ialah : %d", a);}
    if (a < 0)
    {printf("\nNilai mutlaknya ialah : %d", -a);}    
    printf("\n--------------------------------------------------------\n");
    }