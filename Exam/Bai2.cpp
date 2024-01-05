#include <stdio.h>
float average(int s[], int n)
{
    int sum = 0, count = n;
    for (int i = 0; i < n; i++)
    {
            sum += s[i];
    }
        return (float)sum / count;
}

int main()
{
    int n;
    printf("Nhap so luong phan tu co trong mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    float avg = average(arr, n);
    printf("Everage: %.2f\n", avg);
    return 0;
}
