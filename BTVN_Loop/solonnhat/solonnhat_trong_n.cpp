#include<stdio.h>;
int main()
{
	int n=0;
	printf("nhap vao so nguyen \n");
	scanf("%d",&n);
	int max=0;
	int a=0;
	while(n>0)
	{
		a =n%10;
		if(a>=max)
		{
			max=a;
		}
		n=n/10;
	}
	printf("so lon nhat %d \n",max);
}
