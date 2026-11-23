#include<stdio.h>
int main(){
	int x=10;
	int* p=&x;
	int** dp=&p;
	int*** tp=&dp;
	printf("%d\n%d\n%d\n%d\n",x,*p,**dp,***tp);
	return 0;
}
