#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
};
struct Node* top=NULL;
void push(int data);
int pop();
int main(int argc,char*argv[]){
	int option,data;
	while(1){
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.exit\n");
		scanf("%d",&option);
		switch(option){
			case 1:
				printf("enter data\n");
				scanf("%d",&data);
				push(data);
				break;
			case 2:
				printf("deleted element =%d\n",pop());
				break;
			case 3:
				exit(0);
			default:
				printf("wrong option\n");
		}
	}return 0;
}
void push(int data){
	struct Node* temp;
	temp=(struct Node*)malloc(sizeof(struct Node));
	if(temp==NULL){
		printf("stack overflow\n");
		return;
	}
	temp->data=data;
	temp->next=NULL;
	temp->next=top;
	top=temp;
}
int pop(){
	struct Node*  temp;
	int x;
	if(top==NULL){
		printf("empty Stack\n");
		return -1;
	}
	temp=top;
	top=temp->next;
	temp->next=NULL;
	x=temp->data;
	free(temp);
	return x;
}


