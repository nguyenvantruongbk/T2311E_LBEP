#include <stdio.h>

float average(int a[], int n) {
    int i, sum = 0;
    for (i = 0; i < n; i++) {
        sum += a[i];
    }
    return (float) sum / n;
}

int main() {
    int n, i;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Trung binh cong cua cac gia tri trong mang la: %.2f\n", average(a, n));
    return 0;
}
