#include<stdio.h>
int main(){
	int td[][5]={{1,3,5,7,9},{2,4,6,8,10},{11,22,33,44,55}};
	printf("%ld\n",sizeof(td));
	printf("%ld\n",sizeof(td[0]));
	printf("%ld\n",sizeof(td[0][0]));
	int rows=sizeof(td)/sizeof(td[0]);
	int column=sizeof(td[0])/sizeof(td[0][0]);
	int i,j;
	for(i=0;i<rows;i++){
		for(j=0;j<column;j++){
			printf("%d\n",td[j]);
		}
		printf("%d\n",td[i]);
	}
	return 0;
}
