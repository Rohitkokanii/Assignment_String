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
	while (i<=name[i]) {
		printf("%c", name[i]);
		i += 3;
	}
}

//Q4

void acceptScnf(char arr2[]) {
	printf("\nEnter String Using scanf_s() : ");

	scanf_s("%[^\n]s",arr2,20);
}

void displayPrintf(char arr2[]) {
	printf("\nDisplayed String Using printf() : ");
	int i = 0;
	while (arr2[i])
		printf("%c",arr2[i++]);
}