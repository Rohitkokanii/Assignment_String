/*

Q. 11 : Accept One statement (sentence) from user count number of words
in that sentence.
*/

#include"function.h"

int main() {

	char str[SIZE];

	input(str);

	int n=countWord(str);

	printf("\n%d words in sentence\n",n);

	return 0;
}
