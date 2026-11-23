#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=10;i++){
		for(j=1;j<=15;j++){
			if(i==1||j==1||i==10||j==15||(i==j)||((i+j)==11)){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}	
