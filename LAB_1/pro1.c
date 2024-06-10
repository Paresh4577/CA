#include<stdio.h>

int main(){
	int n,ans;
	
	printf("Enter Size:");
	scanf("%d",&n);
	
	printf("Fact is : %d",fact(n));
	
}

int fact(int n){
	if(n==1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
	
	
//	int i;
//	for(i=1;i<n-1;i++){
//		fact*=i;
//	}
//	
	
	
}
