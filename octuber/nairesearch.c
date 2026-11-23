#include<stdio.h>
#include<string.h>
int nairesearch(char*str,char* pattern);
int nairesearch(char*str,char* pattern){
	int lens=strlen(str);
	int lenp=strlen(pattern);
	int i,j;
	for(i=0;i<=(lens-lenp);i++){
		if(pattern[0]==str[i]){
			for(j=1,j<lenp;j++;){
				if(str[i+j]!=pattern[j])break;
			}
			if(j==lenp)return i;
		}
	}
	return -1;
}
int main(){
	char str[]="Lucknow Junction East";
	char pattern[49];
	printf("Enter string:");
	scanf("%s",&pattern[49]);
	int index=nairesearch(str,pattern);
	printf("Found at %d\n",index);
	return 0;
}
