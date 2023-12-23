#include <stdio.h>
#include <stdbool.h>

bool sohoanhao(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

int main() {
    int n;
    printf("Nhap vao so nguyen duong: ");
    scanf("%d", &n);
    if (sohoanhao(n)) {
        printf("%d la so hoan hao", n);
    } else {
        printf("%d khong phai la so hoan hao", n);
    }
    return 0;
}


