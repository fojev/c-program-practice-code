#include<stdio.h>
#include<stdlib.h>
 struct Node{
	int data;
	struct Node* next;
}*head=NULL;
void createList(int);
void traverseList();
void insertNode(int,int);
void deleteNode(int);
void createList(int n){
	struct Node* temp,*p;
	int data,i;
	for(i=1;i<=n;i++){
		temp=(struct Node*)malloc(sizeof(struct Node));
		temp->next=temp;
		printf("Enter Data\n");
		scanf("%d",&temp->data);
		if(head==NULL){
			head=temp;
		}else{
			p=head;
			while(p->next!=head) p=p->next;
			p->next=temp;
			p=p->next;
			p->next=head;
		}
	}
}
void traverseList(){
	struct Node* temp,*p=head;
	while(p->next!=head){
		printf("%d\t",p->data);
		p=p->next;
	}
	printf("%d\t",p->data);
	printf("\n");
}
void insert(int data,int pos){
	struct Node* q=head,*temp,*p=head;
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=data;
	temp->next=temp;
	if(pos==1){
		struct Node* p=head;
		while((p!=NULL)&&(p->next!=head)){
			p=p->next;
		}
		if(p==NULL){
			head=temp;
		}else{
			temp->next=head;
			head=temp;
			p->next=head;
		}
	}else{
		int count=1;
		while(p->next!=head) p=p->next;
		while((q->next!=head)&&(count<pos-1)){
			q=q->next;
			count++;
		}
		temp->next=q->next;
		q->next=temp;
		if(p==NULL&&pos!=1){
			printf("position does not exit\n");
		}
	}
}
void deleteNode(int pos){
	struct Node* p=head,*q=NULL;
	if(head==NULL){
		printf("List is empty\n");
	}else if(pos==1){
		if(head->next==head){
			free(head);
			head=NULL;
		}else{
			while(p->next!=head){
				p=p->next;
			}
			q=head;
			head=head->next;
			p->next=head;
			free(q);
		}
	}else{
		int count=1;
		while((p->next!=head)&&(count<pos)){
			q=p;
			p=p->next;
			count++;
		}
		if(count!=pos){
			printf("Position does not exit\n");
		}else{
			q->next=p->next;
			free(p);
		}
	}
}
int main(int argc,char*argv[]){
	int option,data,n,pos;
	while(1){
		printf("1.CreateList\n");
		printf("2.TraverseList\n");
		printf("3.InstertNode\n");
		printf("4.DeleteNode\n");
		printf("10.Exit\n");
		scanf("%d",&option);
		switch(option){
				case 1:
					printf("Enter No. of nodes\n");
					scanf("%d",&n);
					createList(n);
					break;
				case 2:
					traverseList();
					break;
				case 3:
					printf("Enter Data to insert\n");
					scanf("%d",&data);
					printf("Enter Position to insert data\n");
					scanf("%d",&pos);
					insert(data,pos);
					break;
				case 4:
					printf("Enter postion to delete\n");
					scanf("%d",&pos);
					deleteNode(pos);
					break;
				case 10:
					exit(0);
				default:
					printf("Enter option is wrong\n");
		}
	}
}
