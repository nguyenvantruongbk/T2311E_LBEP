#include <stdio.h>

int main() {
    int n, i, count_positive = 0, count_negative = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
        if (a[i] > 0) {
            count_positive++;
        } else if (a[i] < 0) {
            count_negative++;
        }
    }
    printf("So luong so duong trong mang la: %d\n", count_positive);
    printf("So luong so am trong mang la: %d\n", count_negative);
    return 0;
}
