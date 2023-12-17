#include <stdio.h>
int main()
{
	int n;
	printf("nhap so n \n ");
	scanf("%d",&n);
	int sum=0;
	while(n>0)
	{
		if(n%10==1)
		{
			sum=sum+1;
			
		}
		n=n/10;
	}
	printf("tong chu so 1 %d", sum);
	
}
