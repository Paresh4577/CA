#include<stdio.h>

int main(){
	int c=0,n,i,a=0,b=1;
	
	printf("Enter Size:");
	scanf("%d",&n);
	
	printf("%d ",a);
	printf("%d ",b);
	
	for(i=1;i<=n;i++){
		c = a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
}
