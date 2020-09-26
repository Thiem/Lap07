#include<stdio.h>
#include<stdlib.h>
int main(){
	char name[7][20],temp[20];
	int i,j;
	for(i=0;i<7;i++){
		printf("\nPlease enter name %d: ", i+1);
		scanf("%s",&name[i]);
	}
	for(i=1;i<7;i++){
		for(j=1;j<7;j++){
			if(strcmp(name[j-1],name[j]) > 0){
				strcpy(temp,name[j-1]);
				strcpy(name[j-1],name[j]);
				strcpy(name[j],temp);
			}
		}
	}
	printf("List name:");
	for(i=0;i<7;i++){
		printf("%s\t",name[i]);
	}
	return 0;
}
