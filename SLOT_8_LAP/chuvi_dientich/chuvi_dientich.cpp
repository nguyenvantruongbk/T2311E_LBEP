#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    do {
        printf("Nhap do dai ba canh cua tam giac: ");
        scanf("%f %f %f", &a, &b, &c);
    } while (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a);
    float p = (a + b + c) / 2;
    float dientich = sqrt(p * (p - a) * (p - b) * (p - c));
    float chuvi = a + b + c;
    printf("Chu vi cua tam giac la: %.2f\n", chuvi);
    printf("Dien tich cua tam giac la: %.2f\n", dientich);
    return 0;
}
