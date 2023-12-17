#include<stdio.h>;
int main()
{
	int n;
	printf("nhap vao so n \n");
	scanf("%d",&n);
	float sum=0;
	while(n>0)
	{
		sum=1.0/(float)n+sum;
		n--;				
	}
	printf("tong can tim la %f",sum);
}
