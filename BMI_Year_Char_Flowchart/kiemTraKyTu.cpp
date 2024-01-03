#include <stdio.h>

int main() {
    char c;
    printf("nhap mot ky tu: ");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z') {
        printf("ky tu nhap vao la chu cai in hoa.\n");
    } else if (c >= 'a' && c <= 'z') {
        printf("ky tu nhap vao la chu cai in thuong.\n");
    } else if (c >= '0' && c <= '9') {
        printf("ky tu nhap vao la so.\n");
    } else {
        printf("ky tu nhap vao la chu cai dac biet.\n");
    }
    return 0;
}
