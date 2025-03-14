/*
Q. 15 : Accept String From User
print number of symbols presnt in it
print number of upper case characters present in it
print number of lower case characters present in it .
*/

#include"function.h"

int main() {

	char str[SIZE];

	input(str);
	
	int i = 0;
	int symCount=0,upCount = 0,lowCont=0;
	
	while (str[i]) {
		if (str[i] >= 65 && str[i] <= 90) {
			upCount++;
		}
		else if (str[i] >= 97 && str[i] <= 122) {
			lowCont++;
		}
		else if (str[i] >= 48 && str[i] <= 57) {
			i++;
			continue;
		}
		else {
			symCount++;
		}
		i++;
	}

	printf("\nTotal Symbol : %d\n",symCount);
	printf("\nTotal UpperCase : %d\n",upCount);
	printf("\nTotal LowerCase : %d\n",lowCont);

	return 0;
}