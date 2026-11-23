#include<stdio.h>
int main(){
	int a[][3]={{1,2,3},{4,5,6},{7,8,6}};
	int b[][3]={{3,6,9},{2,4,6},{10,20,30}};
	int rows=sizeof(a)/sizeof(a[0]);
	int cols=sizeof(a[0])/sizeof(a[0][0]);
	int c[3][3];
	int i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("matrix of a\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}
	printf("matrix of b\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d\t",b[i][j]);
		}
	printf("\n\n");
	}
	printf("matrix of c=a[][]+b[][]\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d\t",c[i][j]);
		}
	printf("\n\n");
	}
	return 0;
}
