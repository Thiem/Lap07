#include <Stdio.h>
#include <stdlib.h>
int main(){
	int arr[5];
	int min,max,i;
	for(i=0;i<5;i++){
		printf("\nPlease enter number %d of array: ",i+1);
		scanf("%d",&arr[i]);
	}
	min = max = arr[0];
	for(i=1;i<5;i++){
		if(min>arr[i]){
			min = arr[i];	
		}
		if(max<arr[i]){
			max = arr[i];
		}
	}
	printf("\nMax of array is: %d ",max);
	printf("\nMin of array is: %d ",min);
	return 0;
}
