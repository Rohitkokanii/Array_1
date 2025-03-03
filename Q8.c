/*
Q 8) Declare and initialise an character array converts all characters to uppercase and
store in the same array . display all array elements before and after manipulation.
Hint : In main () function Declare array
Accept() function accepts all array elements from user
display() function display an array elements
ConvertToUpperCase() will convert all characters to uppercase
*/

#include<stdio.h>
#include "function.h"

int main() {

	char ch[8];
	int n = 8;

	acceptChar(ch, n);
	ConvertToUpperCase(ch, n);
	displayChar(ch, n);

	return 0;
}