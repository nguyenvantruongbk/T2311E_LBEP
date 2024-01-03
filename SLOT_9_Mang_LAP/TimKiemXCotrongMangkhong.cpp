#include <stdio.h>

int main() {
    int n, x, i;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Nhap so x can tim: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            printf("%d co trong mang tai vi tri %d.\n", x, i + 1);
            return 0;
        }
    }
    printf("%d khong co trong mang.\n", x);
    return 0;
}
