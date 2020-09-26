#include <stdio.h>
#include <stdlib.h>
int main(){
	int arr[5];
	int i;
	for(i=0;i<5;i++){
		printf("\nPlease enter number %d:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nArray new:");
	for(i=5-1;i>=0;i--){
		printf("%d\t",arr[i]);
	}
	return 0;
}
