#include <stdio.h>

int main() {
	int n;
	printf("nhap so sao can in tren 1 hang \n");
	scanf("%d",&n);
	int m;
	printf("nhap so hang can in \n");
	scanf("%d",&m);		
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("* ");
        }
        printf("\n");
        if (i % 2 == 1) {
            printf("* ");
        }
    }
    return 0;
}
