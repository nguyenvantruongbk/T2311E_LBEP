#include <stdio.h>
#include <string.h>

struct SinhVien {
    char ten[50];
    float diem;
};

void sapXepTheoTen(struct SinhVien *sv, int n) {
    struct SinhVien temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(sv[i].ten, sv[j].ten) > 0) {
                temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }
}

int main() {
    struct SinhVien sv[20];
    int n = 20;

    // nhap thong tin sinh vien
    for (int i = 0; i < n; i++) {
        printf("Nhap ten sinh vien thu %d: ", i + 1);
        scanf("%s", sv[i].ten);
        printf("Nhap diem thi cua sinh vien thu %d: ", i + 1);
        scanf("%f", &sv[i].diem);
    }

    // sap xep mang theo thu tu alphabet
    sapXepTheoTen(sv, n);

    // in ra mang sinh vien da duoc sap xep
    printf("\nDanh sach sinh vien da duoc sap xep theo thu tu alphabet cua ten sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %.2f\n", sv[i].ten, sv[i].diem);
    }

    return 0;
}
