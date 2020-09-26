#include<stdio.h>
#include<stdlib.h>
int main(){
	char arr[10];
	int i;
	printf("Please enter a line of text: ");
	gets(arr);
	int count = 0;
	int dem = 0;
	for(i=0;i<10;i++){
		if(arr[i] == 'u' || arr[i] == 'e' || arr[i] == 'o' || arr[i] == 'a'  || arr[i] == 'i'){
			count += 1;
		}else{
			if(arr[i] != ' ' || arr[i] != NULL){
				dem += 1;
			}
		}
	}
	printf("Have %d vowel in line of text",dem);
	printf("\nHave %d consonant in line of text",count);
	return 0;
}
