#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/* local variable definition */
//	whileLoop();
//	forLoop();
	printf("ARRAY BEGIN" );
	int arr[5] = {2,4,5,7,9};
	int i = 0;
	for(i; i< sizeof *arr;i++){
		printf("Element[%d] = %d \n",i, arr[i]);
	}
	return 0;
	
}
