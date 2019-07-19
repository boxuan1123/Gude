#include <stdio.h>
#include "output.h"

void main(){
	int n;
	printf("please input a number:\n");
	scanf("%d",&n);
	for  (int i  = 0; i<=n; i++){
		
		outputT2(i);
	}
	
}

