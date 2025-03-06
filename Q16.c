/*

Q 16) Declare and initialise an array display how many times distinct array elements
present in an array .
Hint : In main () function Declare array
Accept() function accepts all array elements from user
display() function display an array elements
CountDistinctArrayElement()

*/

#include<stdio.h>
#include "function.h"

int main() {
	char charArr[8];
	int n = 8;

	acceptChar(charArr, n);
	displayChar(charArr, n);
	CountDistinctArrayElement(charArr,n);
	return 0;
}