#include<stdio.h>
#include<stdlib.h>
void create(int);
void traverse();
void insterNOde(int,int);
void deleteNOde(int);
struct Node{
	struct Node* prev;
	int data;
	struct Node* next;
}*head=NULL;
void create(int n){
	struct Node* temp,*p;
	int data,i;
	for(i=1;i<=n;i++){
		temp=(struct Node*)malloc(sizeof(struct Node));
		if(temp==NULL){
			printf("could not creat\n");
			return;
		}
		temp->prev=NULL;
		temp->next=NULL;
		printf("Enter data:");
		scanf("%d",&temp->data);
		if(head==NULL||i==1){
			head=temp;
		}else{
			p=head;
			while(p->next!=NULL)p=p->next;
			p->next=temp;
			temp->prev=p;
		}
	}
}
void traverse(){
	struct Node* p=head;
	if(p==NULL){
		printf("Empty list\n");
		return;
	}
	while(p->next!=NULL){
		printf("%d\t",p->data);
		p=p->next;
	}
	printf("%d\n",p->data);
	while(p->prev!=NULL){
		printf("%d\t",p->data);
		p=p->prev;
	}
	printf("%d\n",p->data);
}
void insertNode(int pos,int data){
	int i;
	struct Node* temp,*p;
	temp=(struct Node*)malloc(sizeof(struct Node));
	if(temp==NULL){
		printf("Memory allocation failed\n");
		return;
	}
	temp->data=data;
	temp->prev=NULL;
	temp->next=NULL;
	if(pos==1){
		temp->next=head;
		if(head!=NULL){
			head->prev=temp;
		}
		head=temp;
		return;
	}
	p=head;
	for(i=1;i<pos-1&&p!=NULL;i++){
		p=p->next;
	}
	if(p==NULL){
		printf("Invalid Position\n");
		free(temp);
		return;
	}
	temp->next=p->next;
	temp->prev=p;
	if(p->next!=NULL){
		p->next->prev=temp;
	}
	p->next=temp;
}
void deleteNode(int pos){
	struct Node* p=head;
	if(p==NULL){
		printf("Empty List\n");
		return;
	}
	if(pos==1){
		head=p->next;
		if(p->next!=NULL)
			p->next->prev=p->prev;
		p->next=NULL;
		free(p);
	}else{
		int count=1;
		while(p->next!=NULL&&count<pos){
			count++;
			p=p->next;
		}
		if(count==pos){
		p->prev->next=p->next;
		if(p->next!=NULL)
			p->next->prev=p->prev;
		p->prev=NULL;
		p->next=NULL;
		free(p);
		}else{
		printf("Position Does not exist\n");
		}
	}

}
int main(int argc,char*argv[]){
	int option,n,pos,data;
	while(1){
		printf("1.Create\n");
		printf("2.traverse\n");
		printf("3.InsertNode\n");
		printf("4.deleteNOde\n");
		printf("5.exit\n");
		scanf("%d",&option);
		switch(option){
				case 1:
					scanf("%d",&n);
					create(n);
					break;
				case 2:
					traverse();
					break;
				case 3:
					printf("enter postion to insert Node\n");
					scanf("%d",&pos);
					printf("Enter data to insert\n");
					scanf("%d",&data);
					insertNode(pos,data);
					break;
				case 4:
					printf("Enter postion to delete data\n");
					scanf("%d",&pos);
					deleteNode(pos);
					break;
				case 5:
					exit(0);
				default:
					printf("wrong option you choose\n");
		}
	}
	return 0;
}
