#define _CRT_SECURE_NO_WARNINGS
#define STUDY	1
#include <stdio.h>
#include <string.h>
#include "example.h"
int main(void) {

#if STUDY==1

	int num_arr[100];
	char str[100];

	printf("Size of num_arr : %d\r\n", sizeof(num_arr));
	printf("Size of str : %d\r\n", sizeof(str));


#elif STUDY==2

	char str[100] = "Hello, This is string";
	printf("str : %s\r\n", str);
	printf("Size of str : %d\r\n", sizeof(str));
	printf("length of str : %d\r\n", strlen(str));
	//printf("str[7] : %c", str[7]);

#elif STUDY==3

	char str[100];
	str = "Hello"; // -> Error
	//strcpy(str, "Hello");
	printf("std : %s\r\n", str);

#elif STUDY==4
	int arr[10][10];
	arr[3][5] = 7;
	printf("Size of num_arr : %d\r\n", sizeof(arr));


#elif STUDY==5

	int num1 = 5;

	if (num1 > 10) {
		printf("num1은 10보다 큽니다.\r\n");
	}else {
		printf("num1은 10보다 작습니다.\r\n");
	}

#elif STUDY==6

	int num1 = 5;

	if (num1 >= 10) { 
		printf("num1은 10이상입니다."); 
	}else if (0 <= num1 < 10) { 
		printf("num1은 10보다 작지만 양수입니다."); 
	}else { 
		printf("num1은 음수입니다."); 
	}

#elif STUDY==7

	int num1 = 5;
	
	if (num1) {
		printf("num1은 0이 아닙니다.\r\n");
	}

#elif STUDY==8

	int flag = 1;

	switch (flag) { 
		case 0:
			printf("flag는 0입니다.");
			break;
		case 1:
			printf("flag는 1입니다.");
			break;
		default:
			printf("해당사항없습니다."); 
	}

#elif STUDY==9
	
	/*code1*/
	//calculator : 숫자 2개 + 문자 입력 -> 결과 출력
	Example1();
	

	/*code1*/

#elif STUDY==10
	int i, j;
	int arr[100];
	int arr1[10][10];
	for (i = 0; i < 100; i++) {
		arr[i] = i;
	}
	
	PrintArr(arr, sizeof(arr)/sizeof(int), 2);

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			arr1[i][j] = i * 100 + j;
		}
	}
	PrintArr(&(arr1[0][0]), 100, 2);


#elif STUDY==11
	int i;
	int arr[100];

	for (i = 0; i < 100; i++) {

		arr[i] = 0;
	}

	i = 0;

	while (i < 10) {

		arr[i] = i;
		i++;
	}

	PrintArr(arr, 100, 2);

#elif STUDY==12

	int i = 0;
	while (1) {

		if (i == 10) {
			printf("exit\r\n");
			break;
		}
		i++;
	}
	printf("Success exiting\r\n");

#elif STUDY==12

	int arr[100]; // 0~99

	for (int i = 0; i < 100; i++) {
		arr[i] = i;
	}

	PrintArr(arr, 100, 2);

	/*code*/
	Example2(arr, 100, 5);
	//0~99까지 중에 5의 배수를 -1로 만들기

	/*code*/

	PrintArr(arr, 100, 2);

#endif

	return 0;
}
