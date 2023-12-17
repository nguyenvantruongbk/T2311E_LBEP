#include <stdio.h>
int main(){
	int n;
	printf("nhap vao so n  ");
	scanf("%d",&n);
	int a=n;
	int b=0;
	while(a>0){
		if(n%a==0){			
			printf("%d \n",a);
			b=b+a;
		}else{
			
		}
		
		a--;
	}
	//no
	printf("tong %d",b);
	
	
}
