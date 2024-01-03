#include <stdio.h>

int main() {
    int n, i, sum, max_sum = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    sum=0;
    for (i = 0; i < n; i++) {    
            if (a[i] > 0) {
                sum += a[i];
                if (sum > max_sum) {
                    max_sum = sum;
                }
            } else sum =0;
        
    }
    printf("Tong lon nhat cua chuoi so duong trong mang la: %d\n", max_sum);
    return 0;
}
