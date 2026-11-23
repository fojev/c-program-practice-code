#include<stdio.h>
 main()
{             // if  condition//
	int x = 10,y=20;
	printf("begining of if\n");
	if (x>y)
	 {
		printf("inside if\n");
		printf("leaving if\n");
	} else{
		printf("inside else\n");  //dangling else problem
		printf("leaving else\n");
		}
	printf("outside of if\n");
}
