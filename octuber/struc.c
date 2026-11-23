#include<stdio.h>
int main(int argc,char*argv[]){
	typedef struct{
		char*name;
		int age;
		char*gender;
	}student;
	student*sp;
	student stu;
	sp=&stu;
	stu.name="Fazal";
	sp->age=200;
	stu.gender="Gay";
	printf("Name:%s\n",sp->name);
	printf("age:%d\n",stu.age);
	printf("gender:%s\n",sp->gender);
	return 0;
}
