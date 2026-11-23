#include<stdio.h>
int main(){
	int age=10;
	int* p=&age;
	printf("%d\n",(int)sizeof(p));
	return 0;
}
