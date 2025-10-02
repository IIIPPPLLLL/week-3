#include <stdio.h>

int main() {
    int a, b, c;

    printf("Masukkan tiga bilangan bulat (a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    // Cek validitas segitiga
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Bukan segitiga (ada sisi <= 0)\n");
        return 0;
    }

    // Cari sisi terbesar
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    if (max >= (a + b + c - max)) {
        printf("Bukan segitiga (sisi terbesar >= jumlah dua sisi lain)\n");
        return 0;
    }

    // Cek segitiga sama sisi
    if (a == b && b == c) {
        printf("Segitiga Sama Sisi (Equilateral)\n");
    }
    // Cek segitiga sama kaki
    else if (a == b || b == c || a == c) {
        printf("Segitiga Sama Kaki (Isosceles)\n");
    }
    // Cek segitiga siku-siku (Teorema Pythagoras)
    else if ((a*a + b*b == c*c) ||
             (a*a + c*c == b*b) ||
             (b*b + c*c == a*a)) {
        printf("Segitiga Siku-Siku (Right Triangle)\n");
    }
    // Jika tidak masuk kategori lain
    else {
        printf("Segitiga Bebas (Scalene)\n");
    }

    return 0;
}
