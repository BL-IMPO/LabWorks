// malloc

#include <stdio.h>

int main(void){
	
	int n;
	scanf("%d", &n);
	
	int * A = malloc(n * sizeof(int));
	int i;
	for( i= 0; i < n ; i++)
		*(A + i) = i;
	
	for(i = 0; i < n ; i++)
		printf("%d\n", *(A + i));
	
	free(A);
	
	return 0;
}
