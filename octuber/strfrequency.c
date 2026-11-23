#include<stdio.h>
#include<string.h>
void freq(char*);
void freq(char*str){
	int count=0;
	int i,j;
	for(i=0;i<strlen(str);i++){
		if(str[i]==' ')continue;
		count=0;
		for(j=0;j<strlen(str);j++){
			if(str[i]==str[j]){
				if(j<i){
					break;
				}
				count++;
			}
		}
		if(count>0){
			printf("%c frequency at %d\n",str[i],count);
		}
	}
}
int main(){
	char str[200];
	printf("Enter your characters\n");
	scanf("%[^\n]s",str);
	freq(str);
	return 0;
}
