#include <stdio.h>
int main(){
	float tk=1000000;
	int y = 10;  // hay sai
	//int st=1000000;


	while(y>0){
		//yes
		tk=tk/(1+8.0/100);    //lo sai 8 sang 8.0
		y--;
		
	}
	
	//no
	printf("so tai khoan %f",tk);
	
}
