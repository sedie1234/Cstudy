#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "example.h"

void Example1(void) {

	char* str;
	char c;
	float num1, num2;

	str = (char*)malloc(sizeof(char) * 100);

	printf("Calculator! Please input the value \r\n"
			"ex) 3.3 x 5 (no space beween values)\r\n");
	scanf("%s", str);

	sscanf(str, "%f %c %f", &num1, &c, &num2);

	switch (c) {

		case '+':
			printf("result = %f\r\n", num1 + num2);
			break;

		case '-':
			printf("result = %f\r\n", num1 - num2);
			break;
		
		case 'x':
			printf("result = %f\r\n", num1 * num2);
			break;

		case '*':
			printf("result = %f\r\n", num1 * num2);
			break;

		case '/':
			printf("result = %f\r\n", num1 / num2);
			break;

		default:
			printf("Not defined format\r\n");
			break;
	}

	free(str);
	return;
}

void PrintArr(int* arr, int size, int type) {

	printf("[Array Dumpling]\r\n      ");
	if (type == 1) {
		for (int i = 0; i < size; i++) {
			printf("arr[%d] = %d\r\n", i, arr[i]);
		}

	}else if (type == 2) {
		for (int i = 0; i < 10; i++) {
			printf("%03d ", i);
		}
		printf("\r\n      ");
		for (int i = 0; i < 40; i++) {
			printf("-", i);
		}
		printf("\r\n");
		for (int i = 0; i < size; i++) {
			if (i % 10 == 0) {
				printf("%03d | ", i / 10);
			}
			printf("%03d ", arr[i]);
			if (i % 10 == 9) {
				printf("\r\n");
			}
		}


	}
	
	return;
}

void Example2(int* arr, int size, int ex) {

	for (int i = 0; i < size; i++) {
		if (!(arr[i] % ex)) {
			arr[i] = -1;
		}
	}
	return;
}