#include<stdio.h>
void asc(int*,int);
void desc(int*,int);
void sort(int*,int,void(*)(int*,int));
void print(int*,int);
int main(){
	int arr[]={5,3,2,8,4,6,1};
	int len=sizeof(arr)/sizeof(arr[0]);
	print(arr,len);
	sort(arr,len,asc);
	print(arr,len);
	sort(arr,len,desc);
	print(arr,len);
	return 0;
}
