#include<stdio.h>
#include<stdlib.h>
int main(){
	char arr[100];
	int i;
	printf("Please enter a line of text: ");
	gets(arr);
	int count = 0;
	for(i=0;i<100;i++){
		if(arr[i] == 'u' || arr[i] == 'e' || arr[i] == 'o' || arr[i] == 'a'  || arr[i] == 'i'){
			count += 1;
		}
	}
	printf("Have %d vowel in line of text",count);
	return 0;
}
