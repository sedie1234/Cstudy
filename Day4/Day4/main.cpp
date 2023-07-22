#define _CRT_SECURE_NO_WARNINGS
#define STUDY	1

#include <stdio.h>

#if STUDY == 1

int Sum(int a, int b) {

	int c = a + b;
	return c;

}

int main(void) {

	int num1 = 3;
	int num2 = 4;
	int res;
	res = Sum(num1, num2);

	return;
}

#elif STUDY == 2

void Function1(void) {
	printf("1번 함수입니다.\r\n");
	return;
}

void Function2(void) {
	printf("2번 함수 입니다.\r\n");
	return;
}


int main(void) {
	Function1();
	Function2();

	return 0;
}

#elif STUDY == 3

void Function1(void);
void Function2();

int main(void) {
	Function1();
	Function2();

	return 0;
}

void Function1(void) {
	printf("1번 함수입니다.\r\n");
	return;
}

void Function2(void) {
	printf("2번 함수 입니다.\r\n");
	return;
}
#elif STUDY == 4

void Function1(void);
void Function2();
void CallFunctions();

int main(void) {
	CallFunctions();

	return 0;
}

void Function1(void) {
	printf("1번 함수입니다.\r\n");
	return;
}

void Function2(void) {
	printf("2번 함수 입니다.\r\n");
	return;
}

void CallFunctions() {
	printf("1번함수와 2번함수를 호출합니다.\r\n");
	Function1();
	Function2();
}

#elif STUDY == 5

void Function1(void) {
	printf("1번 함수입니다.\r\n");
	return;
}

void CallFunctions(void) {
	Function1();
	Function2();
}

void Function2(void) {
	printf("2번 함수 입니다.\r\n");
	return;
}


int main(void) {
	
	CallFunctions();
	return 0;
}

#elif STUDY == 6

void Swap(int a, int b);
int main(void) {
	int num1 = 5;
	int num2 = 9;

	int temp;

#if 1
	temp = num1;
	num1 = num2;
	num2 = temp;
#else
	Swap(num1, num2);
#endif

	printf("num1 = %d / num2 = %d\r\n", num1, num2);

	return 0;
}

void Swap(int a, int b) {

	int c;
	c = a;
	a = b;
	b = c;

	return;
}

#elif STUDY == 7

void Swap(int* a, int* b);
int main(void) {
	int num1 = 4;
	int num2 = 7;
	Swap(&num1, &num2);
	printf("num1 = %d / num2 = %d\r\n", num1, num2);

	return 0;
}

void Swap(int* a, int* b) {
	int c;
	c = *a;
	*a = *b;
	*b = c;

	return;
}

#elif STUDY == 8

void ArrPrinter(int* arr, int size);
void ArrPrinter2(int* arr, int size);
int main(void) {

	int arr[100];

	for (int i = 0; i < 100; i++) {
		arr[i] = i;
	}

	ArrPrinter(arr, 100);
	ArrPrinter2(arr, 100);
	return 0;
}

void ArrPrinter(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\r\n");
}

void ArrPrinter2(int* arr, int size) {
	int* ptr = arr;
	for (int i = 0; i < size; i++) {
		printf("%d ", *(ptr++));
	}
	printf("\r\n");
}

#elif STUDY == 9

#define X	10
#define Y	10
void ArrPrinter(int* arr, int x, int y);
int main(void) {

	int arr[X][Y];
	for (int i = 0; i < X; i++) {
		for (int j = 0; j < Y; j++) {
			arr[i][j] = 100 * i + j;
		}
	}

	ArrPrinter(/*arr?*/, X, Y);

	return 0;
}
void ArrPrinter(int* arr, int x, int y) {

	/*code*/

	/*code*/

}





#endif