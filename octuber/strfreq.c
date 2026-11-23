#include<stdio.h>
#include<string.h>
void freqbyhash(char*str);
void freqbyhash(char*str){
	int frequencies[128]={0};
	int i;
	for(i=0;i<strlen(str);i++){
		if(str[i]==' ')continue;
		frequencies[str[i]]++;
	}
	for(i=0;i<128;i++){
		if(frequencies[i]>0){
			printf("%c frequency at %d\n",(char)i,frequencies[i]);
		}
	}
}
int main(){
	char str[200];
	printf("Enter Character:\n");
	scanf("%[^\n]s",str);
	freqbyhash(str);
	return 0;
}
