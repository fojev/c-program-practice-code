#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[],char**envp){
	if(argc==1){
		printf("Correct usage:<cmd><args..>\n");
		return 0;
	}
	int i;
	float sum=0;
	for(i=1;i<argc;i++){
		sum+=atof(argv[i]);
}
	float avg=sum/(argc-1);
	printf("Avg=%f\n",avg);
	return 0;
}
