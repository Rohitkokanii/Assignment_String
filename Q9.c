/*
Q . 9: Accept Two Strings From User , compare Two Strings , print
which one is larger or smaller or equal
Ex . strl Seed
strl Seed
str2 Seed
---> both Strings are equal
str2 seed (Observe that first character of
strl is upper case and that of str2 is in lower case , ASCII value
difference will be negative ) strl is smaller that str2
strl seed
str2 Seed
-> strl is larger than str2
(Use different different functions)
*/

#include"function.h"

int main() {

	char str1[SIZE];
	char str2[SIZE];

	input(str1);
	input(str2);


	int n=strComp(str1,str2);

	if (n > 0) {
		printf("\n%s is larger then %s\n",str1,str2);
	}
	else if (n<0) {
		printf("\n%s is larger then %s\n",str2,str1);
	}
	else {
		printf("\nBoth Are equals\n");
	}

	return 0;
}