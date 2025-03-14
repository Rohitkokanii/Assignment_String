/*
Q .12 : Accept multiple sentances from user store that sentences on one character array
count number of sentances .

*/

#include "function.h"

int main() {

	char str[SIZE];

	input(str);

	int n = countSent(str);

	printf("\n%d Sentences\n",n);

	return 0;
}