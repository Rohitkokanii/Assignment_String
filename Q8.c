/*
Accept Two Strings From User , concatinate two Strings (second String should be
attached to the end of first string ) ( Use Different different Functions )
Ex. strl => Seed
Infotech
Concatinated String Seedlnfotech
*/

#include"function.h"

int main() {

	char str1[SIZE];
	char str2[SIZE];


	input(str1);
	input(str2);

	concat(str1,str2);

	printf("\nConcated string\n");
	display(str1);
	return 0;
}