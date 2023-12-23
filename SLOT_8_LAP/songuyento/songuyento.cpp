#include <stdio.h>
#include <stdbool.h>

bool songuyento(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Nhap vao so nguyen duong: ");
    scanf("%d", &n);
    if (songuyento(n)) {
        printf("%d là so nguyen to", n);
    } else {
        printf("%d khong phai la so nguyen to", n);
    }
    return 0;
}
