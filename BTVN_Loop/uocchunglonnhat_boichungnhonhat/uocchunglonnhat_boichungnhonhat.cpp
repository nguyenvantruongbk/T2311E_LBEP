#include <stdio.h>
int main(){
	int a;
	printf("nhap a \n  ");
	scanf("%d",&a);
	int b;
	printf("nhap b \n  ");
	scanf("%d",&b);
	int min=0;
	int max=0;
	if(a>=b){
		min = b;
		max = a;
		
	}else{
		min = a;
		max = b;
		
	}
	int n =min;
	int m= max;
	while(min%n>0 || max%n>0)
	{
		n--;
	}
	printf("uoc chung lon nhat %d \n", n);
	n=min;
	m=max;
	int p=m*n;
	while(m%max>0 || m%min>0 )
	{
		if(m<=p)
		{
			m++;
		}
		
	}
	printf("boi chung nho nhat %d \n",m);
	
	
}
