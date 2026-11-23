#include<stdio.h>
static struct student{
	char gender;
	char*name;
	int age;
}stu={'F',"Fazal",100};
int main(int argc,char*argv[]){
	printf("Name:%s\n",stu.name);
	printf("age:%d\n",stu.age);
	printf("gender:%c\n",stu.gender);
	printf("size=%d\n",(int)sizeof(stu));
	return 0;
}
