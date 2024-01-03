#include <stdio.h>

int main() {
	
	int n;
	printf("nhap so sao can in tren 1 hang \n");
	scanf("%d",&n);
	int m;
	printf("nhap so hang can in \n");
	scanf("%d",&m);			
    int i, j, k;
    for (i = 0; i < m; i++) {
        for (j = 0; j < i + 1; j++) {
            for (k=0; k<i+1; k++){
			
			printf("* ");
			}
			printf("\t");
        }
        printf("\n");
    }
    return 0;
}
