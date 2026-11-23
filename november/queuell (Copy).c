#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
static struct node *front = NULL;
static struct node *rear = NULL;
int enqueue(int data)
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	if(front == NULL && rear == NULL){
		front = temp;
		rear = temp;
	}else{
        	rear->next = temp;
        	rear = rear->next;
    }
}
int dequeue(){
	struct node *temp;
	int x;
	if(front == NULL && rear == NULL){
		printf("Empty Queue\n");
		return -1;
	}else{
		temp = front;
		x=front->data;
		front=front->next;
	if(front == NULL){
            rear = NULL;
	}
	temp->next = NULL;
	free(temp);
	return x;
    }
}
