#define _CRT_SECURE_NO_WARNINGS
#define STUDY	3
#include <stdio.h>
#include <string.h>

#if STUDY == 1
struct Student {
	char name[100];		//이름
	int ID;				//학번
	int score;			//점수
};

int main(void) {

	struct Student Aclass[10];

	strcpy(Aclass[0].name, "MinSu");
	
	for (int i = 0; i < 10; i++) {
		Aclass[0].ID = i;
	}

	return 0;
}


#elif STUDY == 2
typedef struct Student {
	char name[100];		//이름
	int ID;				//학번
	int score;			//점수
}STUDENT;

int main(void) {

	STUDENT* ptr;
	STUDENT a;
	strcpy(a.name, "st1");
	a.ID = 2;
	a.score = 88;
	ptr = &a;

	printf("%s ID : %d, score : %d\r\n", ptr->name, ptr->ID, ptr->score);

	return 0;
}
#elif STUDY == 3

int main(void) {
	int a = 0x41424344;
	char* p;

	p = (char*)&a;

	printf("%d %d %d %d\r\n", *p, *(p + 1), *(p + 2), *(p + 3));
	printf("%c %c %c %c\r\n", *p, *(p + 1), *(p + 2), *(p + 3));

	return 0;
}

#endif