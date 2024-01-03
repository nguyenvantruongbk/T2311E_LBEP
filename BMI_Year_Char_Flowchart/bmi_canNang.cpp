#include <stdio.h>

int main() {
    float weight, height, bmi;
    printf("nhap can nang (kg): ");
    scanf("%f", &weight);
    printf("nhap chieu cao (m): ");
    scanf("%f", &height);
    bmi = weight / (height * height);
    printf("bmi cua ban la: %.2f\n", bmi);
    if (bmi < 18.5) {
        printf("ban dang gay.\n");
    } else if (bmi < 25) {
        printf("ban co can nang binh thuong.\n");
    } else if (bmi < 30) {
        printf("Ban dang thua can.\n");
    } else {
        printf("ban dang beo phi.\n");
    }
    return 0;
}
