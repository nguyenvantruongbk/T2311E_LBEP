#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, i, j, max, min, index1,index2;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap cac phan tu cua mang: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Nhap gia tri x: ");
    scanf("%d", &x);
    max = abs(a[0] - x);
    min = max;
    index1 = 0;
    index2=0;
    for (i = 1; i < n; i++)
    {
        if (abs(a[i] - x) > max)
        {
            max = abs(a[i] - x);
            index1 = i;
        }
        if (abs(a[i] - x) < min)
         {
			  min = abs(a[i] - x);
			  index2=i;
		}
    }
    printf("Gia tri trong mang xa gia tri x nhat la: %d\n", a[index1]);
    printf("gia tri trong mang gan gia tri x nhat la: %d\n",a[index2]);
    return 0;
}
