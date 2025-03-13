/*
Q .7 : Declare Character Array In Main() function , call input() function which accept String
from user , Write a function reversestring() to Reverse String content write
checkPalindrome() function which accept orignal String and reversed String as
parameters , and check User Entered String is palindrome or not .
Orignal String : LeveL
Reverse String : LeveL
LeveL Is Palindrome String
*/

#include"function.h"

int main() {

	char ch[SIZE];
	char copyCh[SIZE];


	input(ch);

	copyString(copyCh,ch);

	reverseString(ch);

	checkPalindrome(copyCh,ch);



	return 0;
}