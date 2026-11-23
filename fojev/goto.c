#include<stdio.h>
void display();
int main(){
	printf("Inside of main\n");
	goto ab;
	display();
	printf("End of main\n");
	return 0;
}
void display(){
	ab:
	printf("Display Called\n");
}
