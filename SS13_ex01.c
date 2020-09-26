#include <stdio.h>
#include <stdlib.h>
int main()
{
	int var = 500, *ptr_var;
	ptr_var = &var; 
	printf("The value %d is stored at address %u:",var,&var);
	printf("\nThe value %u is stored at address: %u", ptr_var, &ptr_var);
	printf("\nThe value %d is stored at address:%u", *ptr_var, ptr_var);
	return 0;
}
