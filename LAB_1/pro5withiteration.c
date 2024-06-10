#include<stdio.h>
void main(){
	int num1,temp=1,num2,i=1;
	
	printf("Enter First Number:");
	scanf("%d",&num1);
	
	printf("Enter Second Number:");
	scanf("%d",&num2);
	
	while(i<=num1 && i<=num2){
		if(num1%i==0 && num2%i==0){
			temp=i;
		}
		i++;
	}
	
	printf("The GCD of two no is: %d",temp);
}
