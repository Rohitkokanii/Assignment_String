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

//Q5

void copyString(char ch2[], char ch1[]) {

	int j = 0;
	while (ch1[j]) {
		ch2[j] = ch1[j];
		j++;
	}
	ch2[j] = '\0';
/* int i = 0;
	while (ch1[i]) 
		i++;
	
	int j = 0;
	while(j<=i){
		ch2[j] = ch1[j];
	j++;
	}
	*/
}


//Q6

void reverseString(char ch[]) {

	int i = 0;

	while (ch[i])
		i++;

	for (int j = 0; j < i / 2;j++) {
		int temp = ch[j];
		ch[j] = ch[i - 1 - j];
		ch[i - 1 - j] = temp;
	}

}

//Q7

void checkPalindrome(char copyCh[], char ch[]) {

	if (copyCh == ch) {
		printf("\n%s is Palindrom ", copyCh);
	}
	else {
		printf("\n%s is not Palindrom \n", copyCh);
	}
}

//Q8

void concat(char str1[], char str2[]) {

	int i = 0;
	while (str1[i])
		i++;

	int j = 0;

	while (str2[j]) {
		str1[i] = str2[j];
		j++;
		i++;
	}
	str1[i] = str2[j];
}

//Q9

int strComp(char str1[], char str2[]) {


	int i = 0;

	int c = 0;
	
	while (str1[i]) {

		int a = str1[i];
		int b = str2[i];

		c = a - b;
		if (c == 0) {
			i++;
		}
		else
		{
			return c;
		}
	}
}

//Q10

void countChar(char str[]) {

	int i = 0;

	while (str[i])
		i++;

	printf("\n\"%s\" have %d Character \n",str,i);
}

//Q11

int countWord(char str[]) {

	int i = 0;
	int countSpace = 1;
	while (str[i]) {
		if (str[i] == 32 &&str[i+1]>0) {
			countSpace++;
		}
		i++;
	}
	return countSpace;
}

//Q12

int countSent(char str[]) {


	int i = 0;
	int countSent = 0;
	while (str[i]) {

		if (str[i] == 46) {
			countSent++;
		}
		i++;
	}

	return countSent;
}

//Q13

void charFreq(char str[]) {

	int i = 0;
	while (str[i]) {

		char ch = str[i];
		int temp = 0, count = 1;

		int j = 0;
		while (j < i) {
			if (ch == str[j]) {
				temp = 1;
				break;
			}
			j++;
		}

		if (temp == 0) {
			int k = i+1;
			while (str[k]) {
				
				if (ch == str[k])
					count++;
				k++;
			}

			printf("\n %c Character Occurs %d times \n", ch, count);
		}

		i++;
	}
/*
	int i = 0;


	char visited = -1;
	while (str[i]) {
		int count = 0;
		int j = 0;

		if (visited == str[i]) {
			i++;
			continue;
		}

		while (str[j]) {

			if (str[i] == str[j]) {
				
				visited = str[i];
				count++;
			}
			j++;
		}
		printf("\n%c Occured %d times\n", str[i], count);
		i++;
	}

	*/
}



//Q14

void countVowels(char str[]) {

	int i = 0,j=0;
	int count = 0;
	char countOcc[SIZE];
	while (str[i]) {

		if (str[i] == 'A' || str[i] == 'a' ||
			str[i] == 'E' || str[i] == 'e' ||
			str[i] == 'I' || str[i] == 'i' ||
			str[i] == 'O' || str[i] == 'o' ||
			str[i] == 'U' || str[i] == 'u' ) {

			countOcc[j] = str[i];
			j++;
			count++;
		}

		i++;
	}
	printf("\n %d vowels\n",count);
	countOcc[j] = '\0';
	charFreq(countOcc);

}
