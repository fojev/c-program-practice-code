#include<stdio.h>
int main()
{
/*	int x =13;
	int y =5;
	int a = x/y;
	int b =x%y;
	printf("a=%d\n",a);
	printf("b=%d\n",b);

	float f1 = 3.57f;
	float f2 = 2.23f;
	float f3 = f1/f2;
	//float f4 = f1%f2;
	printf("f3=%f\n",f3);
	//printf("f4=%f\n",f4);*/

	/*int x = 10;
	int y = 20;
	int z = 30;
	int a = (++x<++y)&&(++y<++z);
	//int b = (++x<++y)||(++y<++z);
	printf("a=%d\n",a);
	//printf("b=%d\n",b);
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	printf("z=%d\n",z);*/


	int x = 10;
	int y = 10;
	int z = ++x;
	int a = y++;
	printf("x=%d\ty=%d\n",x,y);
	printf("z=%d\ta=%d\n",z,a);
	return 0;
} 
