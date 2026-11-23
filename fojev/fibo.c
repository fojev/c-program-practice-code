#include<stdio.h>
int sum(int n){
	int result;
	result=(n*(n+1))/2;
	return result;
}
int main() {
	unsigned int n;
	printf("Enter number: ");
	scanf("%u",&n);
	int result = sum(n);
	printf("Fibonacci of %u is %d",n,result);
	return 0;
}
