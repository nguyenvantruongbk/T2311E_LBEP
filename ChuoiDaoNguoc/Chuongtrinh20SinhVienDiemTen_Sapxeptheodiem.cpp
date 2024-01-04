#include <stdio.h>
#include <string.h>

struct SinhVien {
    char ten[50];
    float diem;
};

void sapXepTheoDiem(struct SinhVien *sv, int n) {
    struct SinhVien temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sv[i].diem < sv[j].diem) {
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

    // Nhap thong tin sinh vien
    for (int i = 0; i < n; i++) {
        printf("Nhap ten sinh vien thu %d: ", i + 1);
        scanf("%s", sv[i].ten);
        printf("Nhap diem thi cua sinh vien thu %d: ", i + 1);
        scanf("%f", &sv[i].diem);
    }

    // Sap xep mang sinh vien theo thu tu tu cao den thap
    sapXepTheoDiem(sv, n);

    // in ra mang sinh vien da duoc sap xep
    printf("\nDanh sach sinh vien da duoc sap xep theo thu tu diem tu cao den thap:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %.2f\n", sv[i].ten, sv[i].diem);
    }

    return 0;
}
