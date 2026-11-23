#include<stdio.h>
int main(){
	union gender{
		int male;
		int female;
	}bird;
	bird.male=1;
	bird.female=1;
	printf("%d\n",bird.male);
	printf("%d\n",bird.female);
	printf("%d\n",(int)sizeof(bird));
	return 0;
}
