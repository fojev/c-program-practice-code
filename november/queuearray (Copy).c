#include<stdio.h>
#define N 5
static int queue[N]={0};
static int front =-1;
static int rear =-1;
void enqueue(int data){
	if(rear==N-1){
		printf("overflow\n");
		return;
	}
	queue[++rear]=data;
	if(rear==0){
		front=0;
	}
}
int dequeue(){
	int x;
	if((front==-1)&&(rear==-1)){
		printf("Empty\n");
		return 0;
	}
	x=queue[front++];
	if(front>rear){
		front=-1;
		rear=-1;
	}
	return x;
}
