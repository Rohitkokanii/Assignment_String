/*
Q . 5: Declare two character Array in main() Function Of same size , Accept One String From
User And Store in one string (String should be Accepted in input() function)
, Write a function copyString() which will copy the content of initialized array
into another character Array , display both the Strings Using display() function .
( display function accept base address for only one Array, to display both Strings
, call display two times with different base addresses).

*/

#include"function.h"

int main() {

	char ch1[SIZE];
	char ch2[SIZE];
	input(ch1);

	copyString(ch2,ch1);

	printf("\nch1\n");
	display(ch1);

	printf("\nch2\n");
	display(ch2);

	return 0;
}