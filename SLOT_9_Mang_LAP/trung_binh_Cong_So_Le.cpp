#include <stdio.h>

int main() {
    int n;
    printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n],count;
    int sum=0;
    count=0;
    for(int i = 0; i < n; ++i) {
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
        if(arr[i]%2>0){
        	sum+=arr[i];
        	count++;
		}
    } 
    //printf("%d %d",sum,count);
    float avg = sum / count;
    printf("trung binh cong cac so le trong mang la: %.2f", avg);
    return 0;
}
