#include <stdio.h>

int main() {
    int n, i, count = 0, max_count = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
        if (a[i] > 0) {
            count++;
            if (count > max_count) {
                max_count = count;
            }
        } else {
            count = 0;
        }
    }
    printf("So luong cac so duong lien tiep nhieu nhat la: %d\n", max_count);
    return 0;
}
