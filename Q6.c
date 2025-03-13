/*
Q. 6: Declare Character Array in main() function , Accept String From User in input() function
Write a Seperate Function reverseString() which will reverse the String , call
display() function from main() which will print reversed String .
Ex. If String Is Seed
Reverse String dees
*/

#include "function.h"

int main() {

	char ch[SIZE];
	//char rev[SIZE];

	input(ch);

	printf("\nBefore reverse : ");
	display(ch);


	reverseString(ch);
	printf("\nAfter Reverse : ");
	display(ch);

	return 0;
}