#include <stdio.h>

int search(int a[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n, i, x;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Nhap gia tri x can tim: ");
    scanf("%d", &x);
    if (search(a, n, x)) {
        printf("%d co trong mang.\n", x);
    } else {
        printf("%d khong co trong mang.\n", x);
    }
    return 0;
}
