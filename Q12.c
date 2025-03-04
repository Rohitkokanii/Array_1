/*
Q 12) Declare and initialise an array , copy all array elements into another array in reverse
order
Hint : In main () function Declare array
Accept() function accepts all array elements from user
display() function display an array elements
CopylnAnotherReverse() will copy all array elements into another array in reverse way
*/

#include<stdio.h>
#include "function.h"

int main() {
	char orgArr[8];
	char revArr[8];
	int n = 8;

	acceptChar(orgArr, n);
	printf("\nBefore Revers : ");
	displayChar(orgArr, n);

	CopylnAnotherReverse(orgArr,revArr,n);
	printf("\n After Revers : ");
	displayChar(revArr,n);

	return 0;
}