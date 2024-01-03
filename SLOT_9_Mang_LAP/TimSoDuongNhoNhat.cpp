#include <stdio.h>

int main() {
    int n, i, min_positive = -1;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
        if (a[i] > 0 && (min_positive == -1 || a[i] < min_positive)) {
            min_positive = a[i];
        }
    }
    if (min_positive != -1) {
        printf("So duong nho nhat trong mang la: %d\n", min_positive);
    } else {
        printf("Mang khong co so duong.\n");
    }
    return 0;
}
