#include<stdio.h>
void asc(int*,int);
void desc(int*,int ){
	int temp,flag;
	int i,j;
	for(i=1;i<len;i++){
		flag=0;
		for(j=1;j<len-i+1;j++){
			if(a[j]<a[j-1]){
				flag++;
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
		if(flag==0)break;
	}
}
void des
int main(){
	int arr[]={5,3,2,8,6,4,1};
	int len = sizeof(arr)/sizeof(arr[0]);
	int x;
	printf("First Array:\t");
	for(x=0;x<len;x++){
		printf("%d\t",arr[x]);
	}
	asc(arr,len);
	desc(arr,len);
	printf("\nSorted Array:\t");
	for(x=0;x<len;x++){
		printf("%d\t",arr[x]);
	}
	printf("\n");
	return 0;
}
																																																																																																																																																																																																																																																
