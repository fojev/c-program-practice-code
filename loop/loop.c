#include<stdio.h>
int main(){
	int i;
	for(i=0;i<10;){
		if(i==5){
			//break;
			continue;
		}
		printf("i=%d\n",i);
		i++;
	}
return 0;
}

