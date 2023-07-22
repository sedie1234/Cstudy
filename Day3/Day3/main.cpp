#define _CRT_SECURE_NO_WARNINGS
#define STUDY	8
#include <stdio.h>
#include <string.h>
#include "example.h"

int main(void) {
#if STUDY==1
	int num1;
	num1 = 9;

	printf("num1 : %d\r\n", num1);
	printf("address of num1 : 0x%08X\r\n", &num1);
#elif STUDY==2
	int arr[100];
	char str[100];

	printf("[int address]\r\n");
	for (int i = 0; i < 10; i++) {
		printf("address of num%d : 0x%08X\r\n", i, &(arr[i]));
	}
	printf("\r\n[char address]\r\n");
	for (int i = 0; i < 10; i++) {
		printf("address of num%d : 0x%08X\r\n", i, &(str[i]));
	}

#elif STUDY==3
	int* ptr1;
	int *ptr2;
	int* ptr3;
	int num1, num2;

	num1 = 33;
	num2 = 99;

	ptr1 = &num1;
	ptr2 = &num2;

	printf("num1 = %d / %d / 0X%08X\r\n", num1, &num1, &num1);
	printf("num2 = %d / %d / 0X%08X\r\n", num2, &num2, &num2);
	printf("ptr1 = %d / 0X%08X\r\n", ptr1, ptr1);
	printf("ptr2 = %d / 0X%08X\r\n", ptr2, ptr2);
	printf("value of ptr1 = %d \r\n", *ptr1);
	printf("value of ptr2 = %d \r\n", *ptr2);

	ptr3 = ptr1;
	ptr1 = ptr2;
	ptr2 = ptr3;

	printf("ptr1 = %d / 0X%08X\r\n", ptr1, ptr1);
	printf("ptr2 = %d / 0X%08X\r\n", ptr2, ptr2);
	printf("value of ptr1 = %d \r\n", *ptr1);
	printf("value of ptr2 = %d \r\n", *ptr2);

#elif STUDY==4
	int* ptr1;
	int* ptr2;
	char* ptr3;
	char ptr4;
	int arr[100];
	char str[100];

	for (int i = 0; i < 100; i++) {
		arr[i] = 99 - i;
		str[i] = 'a' + i;
	}

	PrintArr_int(arr, 100, 2);
	PrintArr_char(str, 100, 1);

	printf("address of arr = 0x%08X\r\n", arr);
	printf("address of str = 0x%08X\r\n", str);
	printf("value of *arr = %d\r\n", *arr);
	printf("value of *arr = %c\r\n", *str);

#elif STUDY==5
	int* ptr1;
	int* ptr2;
	char* ptr3;
	char ptr4;
	int arr[100];
	char str[100];

	for (int i = 0; i < 100; i++) {
		arr[i] = 99 - i;
		str[i] = 'a' + i;
	}

	PrintArr_int(arr, 100, 2);
	PrintArr_char(str, 100, 1);

	ptr1 = arr;
	ptr3 = str;

	printf("value of ptr1 = %d\r\n", *ptr1);
	printf("value of ptr3 = %c\r\n", *ptr3);
	printf("address of ptr1 = %d\r\n", ptr1);
	printf("address of ptr3 = %d\r\n", ptr3);


	ptr1++;
	ptr3++;

	printf("value of ptr1 = %d\r\n", *ptr1);
	printf("value of ptr3 = %c\r\n", *ptr3);
	printf("address of ptr1 = %d\r\n", ptr1);
	printf("address of ptr3 = %d\r\n", ptr3);

#elif STUDY==6
	int* ptr1;
	int* ptr2;
	char* ptr3;
	char ptr4;
	int arr[100];
	char str[100];

	ptr1 = arr;
	ptr3 = str;
	printf("\t----------[previous]---------\r\n");
	PrintArr_int(arr, 100, 2);
	PrintArr_char(str, 100, 1);

	for (int i = 0; i < 100; i++) {
		*ptr1 = 99 - i;
		*ptr3 = 'a' + i;
		ptr1++;
		ptr3++;
	}
	printf("\r\n-----------[after]-----------\r\n");
	PrintArr_int(arr, 100, 2);
	PrintArr_char(str, 100, 1);

#elif STUDY==7

	char str[100] = "Hello World";
	char* ptr;
	ptr = str;
	ptr += 6;
	printf("string : %s\r\n", ptr);

#elif STUDY==8
	
	int arr[10][10];

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("address of arr[%d][%d] : 0x%08X\r\n", i, j, &(arr[i][j]));
		}
	}


#endif



	return 0;
}

