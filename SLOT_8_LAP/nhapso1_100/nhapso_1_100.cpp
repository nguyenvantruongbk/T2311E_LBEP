#include <stdio.h>

int main() {
    int n;
    do {
        printf("Nhap vao mot so duong trong khoang tu 1 den 100: ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);
    printf("Ban da nhap so %d trong khoang tu 1 den 100", n);
    return 0;
}
