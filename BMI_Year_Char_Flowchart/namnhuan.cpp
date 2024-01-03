#include <stdio.h>

int main() {
    int year;
    printf("Nhap nam kiem tra: ");
    scanf("%d", &year);
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d la nam nhuan.\n", year);
            } else {
                printf("%d khong phai la nam nhuan.\n", year);
            }
        } else {
            printf("%d la nam nhuan.\n", year);
        }
    } else {
        printf("%d khong phai la nam nhuan.\n", year);
    }
    return 0;
}
