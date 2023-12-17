#include <stdio.h>
int main(){
	int a;
	printf("nhap so \n");
	scanf("%d",&a);
	int n=a-1;
	while(n%6>0){		
		n--;
	}
	//no
	printf("so can tim %d",n);
	
}
