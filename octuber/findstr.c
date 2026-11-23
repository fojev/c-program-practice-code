#include<stdio.h>
#include<string.h>
char* addof(char*s,char ch);
int main(){
	char str[]="Lucknow junction";
	char x;
	char*s;
	printf("Enter your character\n");
	scanf("%c",&x);
	s=addof(str,x);
	if(s
