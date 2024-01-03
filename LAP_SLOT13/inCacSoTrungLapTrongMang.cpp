#include <stdio.h>

int main() {
    int n, i, j;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Cac so trung lap trong mang la: ");
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}
