#include <stdio.h>
#include <math.h>

int main() {
    float a;
    printf("nhap a\n");
    scanf("%f",&a);
    float b;
    printf("nhap b\n");
    scanf("%f",&b); 
    float c;
    printf("nhap c\n");
    scanf("%f",&c);
    
    float delta = b*b -4*a*c;
    printf("delta %f",delta);
    
if(delta<0){
    printf("phuong trinh ko co nghiem thuc");
    
    }else{
        if (delta ==0){
            float x = -b/2/a;
            printf(" phuong trinh co 1 nghiem %f",x);
            
        } else{
            float x1 = (-b+sqrt(delta))/2;
            float x2 = (-b-sqrt(delta))/2;
            printf(" phuowng trinh co nghiem x1 = %f  x2= %f",x1,x2);
            
            
            
        }
    }

    return 0;
}

