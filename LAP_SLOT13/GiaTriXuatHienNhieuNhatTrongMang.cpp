#include <stdio.h>

int main() {
    int n, i, j, max_count = 0, max_value = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (a[j] == a[i]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            max_value = a[i];
        }
    }
    printf("Gia tri xuat hien nhieu nhat trong mang la: %d\n", max_value);
    return 0;
}
