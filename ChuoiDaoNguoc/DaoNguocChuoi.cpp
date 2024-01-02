#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, 100, stdin);

    int len = strlen(str) - 1;
    char *start = str;
    char *end = str + len;

    while (end > start) {
        char temp = *start;
        *start = *end;
        *end = temp;

        ++start;
        --end;
    }

    printf("Chuoi sau khi duoc dao nguoc: %s", str);
    return 0;
}
