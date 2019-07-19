#include <stdio.h>
#include "output.h"
#include <stdlib.h>

void main(){
	int n;

	printf("Please input a integar n, where 0<n<100:\n");
	scanf("%d",&n);

	int *p = (int*)malloc(n*sizeof(int));
	for(int i = 0; i<=n; i++){
		p[i] = n-i;
	}

	int compare ( const void *a, const void *b ){
		return *(int *)a-*(int *)b;
	}

	qsort(p,n,sizeof(p[0]),compare);

	outputT5(p,n);
	free(p);

}
	

