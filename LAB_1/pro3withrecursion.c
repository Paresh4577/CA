#include<stdio.h>
int sum(int n){
	
	if(n==1){
		return 1;
	}
	else{
		return n+sum(n-1);
	}
}

int main(){
	int n;
	printf("Enter Size:");
	scanf("%d",&n);
	
	printf("Total Sum of 1 to n is: %d",sum(n));
}

