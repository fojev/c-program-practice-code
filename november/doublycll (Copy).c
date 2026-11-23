#include<stdio.h>
#include<stdlib.h>
struct Node{
	struct Node* prev;
	int data;
	struct Node* next;
}*head=NULL;
void createList(int n){
	struct Node* temp;
	int i;
	for(i=1;i<=n;i++){
		temp=(struct Node*)malloc(sizeof(struct Node));
		temp->prev=temp;
		temp->next=temp;
		printf("Eneter data\n");
		scanf("%d",&temp->data);
		if(i==1||head==NULL){
			head=temp;
		}else{
			struct Node* p=head;
			while(p->next!=head)p=p->next;
			p->next=temp;
			temp->prev=p;
			temp->next=head;
			head->prev=temp;
		}
	}
}
void traverseList(){
	struct Node* p=head;
	while(p->next!=head){
		printf("%d\t",p->data);
		p=p->next;
	}
	printf("%d\n",p->data);
	p=p->next;
	printf("%d\t",p->data);
	p=p->prev;
	printf("%d\n",p->data);
	while(p!=head){
		printf("%d\t",p->data);
		p=p->prev;
	}
	printf("%d\n",p->data);
}
void insertNode(int data,int pos){
	struct Node* temp,*p=head;
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->prev=temp;
	temp->next=temp;
	printf("Enter data\n");
	scanf("%d",&temp->data);
	if(pos==1){
		if(head==NULL){
			head=temp;
		}else{
			while(p->next!=head)p=p->next;
			temp->next=head;
			head->prev=temp;
			head=temp;
			p->next=temp;
			temp->prev=p;
		}
	}else{
		int count=1;
		p=head;
		while((p->next!=head)&&(count<pos-1)){
			p=p->next;
			count++;
		}
		if(count==(pos-1)){
			temp->prev=p;
			temp->next=p->next;
			p->next->prev=temp;
			p->next=temp;
		}else{
			printf("Postion does not exit\n");
		}
	}
}
void deleteNode(int pos){
	if(head==NULL){
		printf("Empty List\n");
		return;
	}
	struct Node* p=head,*q=head;
	if(pos==1){
		if(p->next==head){
			head=NULL;
			free(p);
		}else{
			while(q->next!=head){
				q=q->next;
			}
			q->next=p->next;
			p->next->prev=q;
			head=p->next;
			p->prev=NULL;
			p->next=NULL;
			free(p);
		}
	}else{
		int count=1;
		while((p->next!=head)&&(count<pos)){
			p=p->next;
			count++;
		}
		if(count==pos){
			p->prev->next=p->next;
			p->next->prev=p->prev;
			p->prev=NULL;
			p->next=NULL;
			free(p);
		}else{
			printf("Position does not exist\n");
		}
	}
}
int main(int argc,char*argv[]){
	int option,n,data,pos;
	while(1){
		printf("1.CreateList\n");
		printf("2.TraverseList\n");
		printf("3.InsertNode\n");
		printf("4.DeleteNode\n");
		printf("10.Exit\n");
		scanf("%d",&option);
		switch(option){
				case 1:
					printf("Enter no. of Nodes\n");
					scanf("%d",&n);
					createList(n);
					break;
				case 2:
					traverseList();
					break;
				case 3:
					printf("Enter Positoin to insert\n");
					scanf("%d",&pos);
					insertNode(data,pos);
					break;
				case 4:
					printf("Enter positon to delete Node:\n");
					scanf("%d",&pos);
					deleteNode(pos);
					break;
				case 10:
					exit(0);
				default:
					printf("Wrong option\n");
		}
	}
}
