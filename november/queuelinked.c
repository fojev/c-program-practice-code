#include<stdio.h>
#include<stdlib.h>
#include"queue.h"
int main(int argc,char*agv[]){
	int option,data;
	while(1){
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Exit\n");
		scanf("%d",&option);
		switch(option){
				case 1:
					printf("Enter the data to enqueue\n");
					scanf("%d",&data);
					enqueue(data);
					break;
				case 2:
					printf("Dequeue the data=%d\n",dequeue());
					break;
				case 3:
					exit(0);
				default:
					printf("wrong option\n");
		}
	}
	return 0;
}
