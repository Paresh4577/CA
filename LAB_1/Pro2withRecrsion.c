#include<stdio.h>

int main(){
	int n;
	printf("Enter Size:");
	scanf("%d",&n);
	
	print(n);
}

void print(int n){
	if(n==50){
		printf("50");
	}
	else{
		printf("%d ",n);
		print(n+1);
	}
}
