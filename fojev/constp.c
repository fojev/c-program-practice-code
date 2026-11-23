#include<stdio.h>
int main(){
	const int x=10;
	int* p=&x;
	const int* q=&x;
	int* const r=&x;
	const int* const s=&x;
	*p=20;
	printf("x=%d\n",x);
	*r=40;
	printf("x=%d\n",x);
	return 0;
}

