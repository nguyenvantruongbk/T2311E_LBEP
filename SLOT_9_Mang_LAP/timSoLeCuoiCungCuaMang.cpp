#include <stdio.h>

int main() {
    int n, i, last_odd = -1;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
        if (a[i] % 2 != 0) {
            last_odd = a[i];
        }
    }
    if (last_odd != -1) {
        printf("So le cuoi cung trong mang la: %d\n", last_odd);
    } else {
        printf("Mang khong co so le.\n");
    }
    return 0;
}
