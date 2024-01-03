#include <stdio.h>

int is_prime(int n) {
    if (n < 2) {
        return 0;
    }
    int i;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, i, max_prime = -1;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        if (is_prime(a[i]) && a[i] > max_prime) {
            max_prime = a[i];
        }
    }
    if (max_prime != -1) {
        printf("So nguyen to lon nhat trong mang la: %d\n", max_prime);
    } else {
        printf("Mang khong co so nguyen to.\n");
    }
    return 0;
}
