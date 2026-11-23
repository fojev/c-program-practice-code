#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
int main(int argc,char*argv[]){
	int option,data;
	while(1){
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.Exit\n");
		scanf("%d",&option);
		switch(option){
			case 1:
				printf("Enter data\n");
				scanf("%d",&data);
				push(data);
				break;
			case 2:
				data=pop();
				if(data!=-1)printf("%d\n",data);
				break;
			case 3:
				exit(0);
			default:
				printf("wrong option\n");
		}
	}
	return 0;
}
