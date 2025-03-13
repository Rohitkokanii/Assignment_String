/*
Q .4. Declare Character Array in main() , Accept FirstName and LastName from user in
input() function (should be accepted multiple words)
using gets()
Using scanf()
write a function display() , which will display the FirstName and LastName
Using puts()
Using printf()
*/

#include"function.h"

int main() {

	char arr[SIZE]; 
	char arr2[SIZE];

	printf("\nEnter String Using gets_s() : ");
	input(arr);
	acceptScnf(arr2);

	printf("\nDisplay String Using puts() : ");
	display(arr);
	displayPrintf(arr2);
	return 0;

}