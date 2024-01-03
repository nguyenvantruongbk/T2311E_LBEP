#include <stdio.h>
#include <string.h>

int main() {
    char str[5][50], temp[50];
    printf("Nhap 5 chuoi:\n");

    // Nhap 5 chuoi
    for(int i = 0; i < 5; ++i) {
        printf("Chuoi %d: ", i + 1);
        gets(str[i]);
    }

    // Sap xeo mang 5 chuoi theo thu tu alphabe
    for(int i = 0; i < 5; ++i) {
        for(int j = i + 1; j < 5; ++j) {
            if(strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("\nChuoi Sau khi duoc xap sep theo thu tu alphabe:\n");
    for(int i = 0; i < 5; ++i) {
        puts(str[i]);
    }
    return 0;
}
