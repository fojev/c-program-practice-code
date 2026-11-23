#include<stdio.h>
void asc(int*,int);
void desc(int*,int);
void print (int*,int);
void asc(int *a,int len){
	int  temp,flag;
	int i,j;
	for(i=1;i<len;i++){
		flag=0;
		for(j=1;j<len-i+1;j++){
			if(a[j]<a[j-1]){
				flag++;
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
		if(flag==0)break;
	}
}
void print(int*a,int len){
	int i;
	for(i=0;i<len;i++)
		printf("%d\t",a[i]);
		printf("\n");
}
void sort(int*a,int len,void(*fn)(int*,int)){
	fn(a,len);
	}
void desc(int*a,int len){
	int temp,flag;
	int i,j;
	for(i=1;i<len;i++){
		flag=0;
		for(j=1;j<len-i+1;j++){
			if(a[j]>a[j-1]){
				flag++;
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
		if(flag==0)break;
	}
}
