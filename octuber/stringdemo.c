#include<stdio.h>
#include<string.h>
int main(){
	char name[]="Amit Kumar";
	int i;
	for(i=0;i<strlen(name);i++){
		if((name[i]>=65)&&(name[i]<=92)){
			name[i]=name[i]+32;
		}
	}
	printf("%s\n",name);
	return 0;
}
