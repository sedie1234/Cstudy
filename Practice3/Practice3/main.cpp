#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main(void) {

	int arr[100];
	int max, min;

	srand(time(NULL));

	for (int i = 0; i < 100; i++) {
		arr[i] =  rand() % 1000;
		printf("%d ", arr[i]);
	}
	printf("\r\n\r\n");

	/*code*/


	/*code*/

	printf("Max = %d  /  Min = %d\r\n", max, min);
	getchar();
	return 0;
}