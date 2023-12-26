#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, flag;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap cac phan tu cua mang: ");
    for (i = 0; i < n; i++)
    {
        flag = 0;
        do
        {
            scanf("%d", &a[i]);
            for (j = 0; j < i; j++)
            {
                if (a[j] == a[i])
                {
                    flag = 1;
                    printf("So da ton tai. Vui long nhap lai: ");
                    break;
                }
            }
        } while (flag == 1);
    }
    printf("Mang da nhap la: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
