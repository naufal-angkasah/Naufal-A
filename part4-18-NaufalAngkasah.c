#include <stdio.h>

int main() {
    int a=0, b=0, bar, kol;
    printf("--------------------------------------------------------\n");
    printf("         ***Membuat baris dan kolom bintang***");
    printf("\n--------------------------------------------------------\n");
    printf("Masukkan baris : ");
    scanf("%d", &bar);
    printf("Masukkan kolom : ");
    scanf("%d", &kol);
    for (a = 0; a < bar ; a++)
    { for(b=0; b < kol; b++) {
        printf("* ");
    }
     printf("\n");
    }  
    return 0;
}