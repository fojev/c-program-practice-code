#include<stdio.h>
int binarysearch(int *arr,int si,int li, int data){
	if(si<=li){
		int mid = (si+li)/2;
		if(arr[mid]==data){
			return mid;
		}else if (arr[mid]>data){
			return binarysearch(arr,si,mid-1,data);
		}else {
			return binarysearch(arr,mid+1,li,data);
		}
	}
	return -1;
}
int main (){
	int arr[]={2,5,9,15,17,35,37};
	int si=0;
	int li=sizeof(arr)/sizeof(arr[0])-1;
	int data;
	printf("Enter number for binary search: ");
	scanf("%d",&data);
	int result=binarysearch(arr,si,li,data);
	if(result==-1){
		printf("Not Found\n");
	}else{
		printf("Found at index%d\n",result);
	}
	return 0;
}

