#include<stdio.h>
long power(unsigned int a,unsigned int n){
	if(n==0)return 1;
	if(n==0) return a;
	return a*power(a,n-1);
}
int main(){
	unsigned int a;
	unsigned int n;
	printf("Enter two positive number:\n");
	scanf("%u%u",&a,&n);
	long result=power (a,n);
	printf("%u power of %u is a %ld\n",a,n,result);
	return 0;
}
