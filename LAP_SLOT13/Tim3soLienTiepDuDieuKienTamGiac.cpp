#include <stdio.h>

int is_triangle(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        return 1;
    }
    return 0;
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
    for (i = 0; i < n - 2; i++) {
        if (is_triangle(a[i], a[i + 1], a[i + 2])) {
            printf("Day 3 so lien tiep trong mang la: %d %d %d\n", a[i], a[i + 1], a[i + 2]);
            return 0;
        }
    }
    printf("Khong tim thay day 3 so lien tiep trong mang thoa man dieu kien lam 3 canh cua tam giac.\n");
    return 0;
}
