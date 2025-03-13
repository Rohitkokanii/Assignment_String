/*
Q .3. Declare character array in main() function , Accept String from user in input() function
, write a function printCharacter() which will print every third character from string .
*/

#include"function.h"

int main() {

	char name[SIZE];
	printf("\nPrint every third character from string\n");
	input(name);
	printAlt3(name);
	return 0;
}