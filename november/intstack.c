#include<stdio.h>
#define N 10
static int stack[N];
static int top =-1;
void push(int data){
	if(top==N-1){
		printf("stack overflow\n");
		return;
	}
	stack[++top]=data;
}
int pop(){
	if(top==-1){
		printf("Empty Stack\n");
		return -1;
	}
	return stack[top--];
}
