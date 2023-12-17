#include<stdio.h>
int main()
{
	int n;
	printf("nhap vao so nguyen \n");
	scanf("%d",&n);
	int sodau=0;
	while(n>0)
	{
		sodau=n%10;
		n=n/10;
	}
	printf("so dau la %d",sodau);
	
}
