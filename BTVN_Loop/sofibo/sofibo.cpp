#include<stdio.h>
int main()
{
	int n=0;
	printf("so fibo can tim \n");
	scanf("%d",&n);
	if (n==1)
	{
		printf("so fibo la 0");
	}else if (n==2||n==3)
			{
			printf("so fibo la 1");
			} else 
				{
					int fn_2=0;
					int fn_1=1;
					int fn=1;
					while(n>2)
					{
					fn_2=fn_1;
					fn_1=fn;
					fn=fn_1+fn_2;	
					n--;	
					}
					printf("so fibo la %d",fn);
				
				}	
}
