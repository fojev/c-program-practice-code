#include<stdio.h>
int main ()
{
	/*unsigned char x = 10;
	unsigned char y = 20;
	unsigned int a = x&y;
	printf("a=%u\n",a);
	unsigned int b = x|y;
	printf("b=%u\n",b);
	unsigned int c = x^y;
	printf("c=%u\n",c);
	unsigned int m = ~x;
	printf("m=%u\n",m);
	printf("m=%d\n",m);*/

	/* int x =-10;
	 int a = x>>1;
	 int b = x>>2;
	 int c = x>>3;
	printf("a=%d\tb=%d\tc=%d\n",a,b,c);
	printf("a=%u\tb=%u\tc=%u\n",a,b,c);*/
	
	int x = 10;
	//int y = 20;
	//int a = (x>y)?x:y;
	//printf("a=%d\n",a);
	x+=10;
	printf("x=%d\n",x);
	x^=5;
	printf("x=%d\n",x);
	return 0;
}
