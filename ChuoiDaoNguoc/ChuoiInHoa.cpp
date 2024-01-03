#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Nhap Chuoi: ");
    gets(str);
    printf("Chuoi In Hoa Het: %s", strupr(str));
    return 0;
}
