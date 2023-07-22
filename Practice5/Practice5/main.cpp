#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

typedef struct Beverage {
	int cost;
	int remain;
}BEVERAGE;

typedef struct Vending {
	BEVERAGE coke;
	BEVERAGE orange;
	BEVERAGE cidar;
	int earn;
}VM;//vending machine


int main(void) {

	int button;
	VM mymachine;

	mymachine.earn = 0;

	//Set the cost
	mymachine.coke.cost = 1000;
	mymachine.orange.cost = 1100;
	mymachine.cidar.cost = 850;

	//Set the init number of beverages
	mymachine.coke.remain = 5;
	mymachine.orange.remain = 3;
	mymachine.cidar.remain = 8;


	while (1) {
		/*UI*/
		system("cls");


		/*input button*/
		fflush(stdin);
		scanf("%d", &button);

		/*vending machine*/
		

	}
	fflush(stdin);
	scanf("%d", &button);


	return 0;
}
