#include"function.h"



//Q1


void input(char name[]) {
	printf("\nEnter Your Name : ");
	gets_s(name, SIZE);
}
void display(char name[]) {

	printf("\nEnterd Name : ");
	puts(name);
}

//Q2

void printAlt(char name[]) {
	int i = 0;
	while (name[i]){
		printf("%c", name[i]);
		i += 2;
	}
}

//Q3

void printAlt3(char name[]) {
	int i = 0;
	while (name[i]) {
		printf("%c", name[i]);
		i += 3;
	}
}