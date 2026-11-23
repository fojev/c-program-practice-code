#include<stdio.h>
#include<string.h>
int main (){
	char name[50]="Lucknow";
	char*sname="Junction";
	char*s=strchr(name,'n');\
	if(s!=NULL){
		printf("%s\n",s);
	}
	char n[50]="Lucknow";
	char*sn="Junction";
	char*s1=strrchr(n,'n');
	printf("%s\n",s1);
	return 0;
}
