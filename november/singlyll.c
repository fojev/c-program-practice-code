#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
}*head=NULL;
void createList(int);
void traverseList();
void insertNode(int data,int pos);
void deleteNode(int);
void reverseList();
int main(int argc,char*argv[]){
	int option,no_of_nodes,pos,data;
	while(1){
		printf("1.CreateList\n");
		printf("2.TraverseList\n");
		printf("3.insertNode\n");
		printf("4.deleteNode\n");
		printf("5.reverseList\n");
		printf("10.exit\n");
		scanf("%d",&option);
		switch(option){
				case 1:
					printf("Enter no of nodes:");
					scanf("%d",&no_of_nodes);
					createList(no_of_nodes);
					break;
				case 2:
					traverseList();
					break;
				case 3:
					printf("insert data\n");
					scanf("%d",&data);
					printf("Enter postion to insert new node:\n");
					scanf("%d",&pos);
					insertNode(data,pos);
					break;
				case 4:
					printf("enter position to delete\n");
					scanf("%d",&pos);
					deleteNode(pos);
					break;
				case 5:
					printf("this list is reverse\n");
					reverseList();
					break;
				case 10:
					exit(0);
				default :
  					printf("wrong option\n");
					break;
		}
	}
	return 0;
}
void createList(int no_of_nodes){
	struct Node* temp,*P;
	int data,i;
	for(i=1;i<=no_of_nodes;i++){
		temp=(struct Node*)malloc(sizeof(struct Node));
		temp->next=NULL;
		printf("Enter data\n");
		scanf("%d",&temp->data);
		if(head==NULL){
			head=temp;
 		}else{
			P=head;
			while(P->next!=NULL)P=P->next;
			P->next=temp;
		}
	}
}
void traverseList(){
	struct Node*P=head;
	while(P!=NULL){
		printf("%d\t",P->data);
		P=P->next;
	}
	printf("\n");
}
void insertNode(int data,int pos){
	struct Node*temp, *p=head;
	int count=1;
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=data;
	temp->next=NULL;
	if(pos==1){
		temp->next=head;
		head=temp;
	}else{
		while(p->next!=NULL&&count<pos-1){
			p=p->next;
			count++;
		}

		if(count==(pos-1)){
			temp->next=p->next;
			p->next=temp;
		}else{
			printf("Position does not exist\n");
		}
	}
}
void deleteNode(int pos){
	struct Node*p,*q;
	int count=1;
	if(head==NULL){
		printf("list is empty\n");
		return;
	}
	if(pos==1){
		p=head;
		head=p->next;
		p->next=NULL;
		free(p);
	}else{
		p=head;
		q=head;
		int count=1;
		while((q!=NULL)&&(count<pos)){
			p=q;
			q=q->next;
			count++;
		}
		if(count==pos){
			p->next=q->next;
			q->next=NULL;
			free(q);
		}else{
			printf("Position does not exist\n");
		}
	}
}
void reverseList(){
	struct Node *p=NULL,*q=head,*r=NULL;
	while(q!=NULL){
		r=q->next;
		q->next=p;
		p=q;
		q=r;
	}
	head=p;
}
