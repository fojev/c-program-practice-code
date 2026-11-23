#include<stdio.h>
int main(){
	unsigned int x;
	printf("Enter Your no.: ");
	scanf("%d",&x);
	if((x&(x-1))==0){
		int pos = 0;
		while(x!=0){
			pos++;
			x=x>>1;
		}
		if((pos & 1)==1){
			printf("Numebr is in power of 4\n");
		}else{
			printf("NUmber is not in power of 4\n");
		}
	}else{
		printf("Not in power of 4\n");
	}
	return 0;
} 
