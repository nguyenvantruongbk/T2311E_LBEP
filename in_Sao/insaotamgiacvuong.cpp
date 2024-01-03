#include <stdio.h>

int main() {
	
	int n;
	printf("nhap so sao can in tren 1 hang \n");
	scanf("%d",&n);
	int m;
	printf("nhap so hang can in \n");
	scanf("%d",&m);			
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < i + 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
