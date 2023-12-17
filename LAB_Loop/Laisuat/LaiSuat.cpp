#include<stdio.h>
int main(){
	int tk=4000;
	int y = 0;  // hay sai
	int st=1000000;
	while(tk<st){
		//yes
		tk=tk+tk*8/100;
		y++;
		
	}
	
	//no
	printf("so nam %d",y);
}

