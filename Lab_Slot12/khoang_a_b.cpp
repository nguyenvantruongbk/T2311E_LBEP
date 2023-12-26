#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, min, max;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap cac phan tu cua mang: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    min = a[0];
    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    printf("Doan [%d, %d] chua tat ca cac gia tri trong mang.\n", min, max);
    return 0;
}
