#include <stdio.h>

int main() {
    int a;
    char front_name[11], back_name[11];
    printf("\n--------------------------------------------------------\n");
    printf("            Aplikasi Pembuat Email Otomatis");
    printf("\n--------------------------------------------------------\n");
    printf("\nMsukkan nama depan anda: ");
    scanf("%[^\n]", front_name);
    printf("Msukkan nama belakang anda: ");
    scanf(" %[^\n]", back_name);
    printf("Masukkan angka kesukaan anda): ");
    scanf(" %d", &a);
    printf("\nUsername email anda adalah: %s%s%d@gmail.com", front_name, back_name, a);
    printf("\n--------------------------------------------------------\n");
    return 0;
}
