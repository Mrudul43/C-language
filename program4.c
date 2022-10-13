#include<stdio.h>
int main(){

int num1,rem;
printf("enter the num=");
scanf("%d",&num1);
rem=num1%2;
if(rem==0)printf("%d is even integer",num1);
else printf("%d is odd integer",num1);


}