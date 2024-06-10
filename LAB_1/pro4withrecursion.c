#include<stdio.h>

void fibb(int a,int b,int i,int n){
	int c = a+b;
	if(i==n){
		printf("%d ",c);
	}
	else{
	  printf("%d " ,c);
	  fibb(b,c,++i,n);
	}
}

void main(){
	int n;
	printf("Enter Size:");
	scanf("%d",&n);
	
	fibb(0,1,1,n);
}
