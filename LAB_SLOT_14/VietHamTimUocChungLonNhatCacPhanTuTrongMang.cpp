#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int gcd_array(int a[], int n) {
    int i, result = a[0];
    for (i = 1; i < n; i++) {
        result = gcd(result, a[i]);
    }
    return result;
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
    printf("Uoc chung lon nhat cua cac phan tu trong mang la: %d\n", gcd_array(a, n));
    return 0;
}
