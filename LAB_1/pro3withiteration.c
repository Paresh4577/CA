#include<stdio.h>

int main(){
	int n,i,sum=0;
	printf("Enter size:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum += i;
	}
	printf("The sum of 1 to n number is: %d",sum);
	
}
