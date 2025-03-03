/*
Q 7) Declare and initialise an character array
Print only uppercase characters
Print ASCII values of all array elements
Hint : In main () function Declare array
Accept() function accepts all array elements from user
display() function display an array elements
PrintUpperCaseChar() function will print all uppercase character
PrintASCll() print ASCII values of all characters
*/

#include<stdio.h>
#include "function.h"

int main() {
	char ch[8];
	int n = 8;
	acceptChar(ch, n);
	displayChar(ch, n);
	PrintUpperCaseChar(ch,n);
	PrintASCll(ch, n);
	return 0;
}