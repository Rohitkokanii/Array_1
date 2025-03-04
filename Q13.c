/*
Q 13) Declare and initialise an array , reverse all array elements in the same array and
display all array elements.
Hint : In main () function Declare array
Accept() function accepts all array elements from user
display() function display an array elements
ReverseSameArray() will reverse all array elements in same array
*/

#include<stdio.h>
#include "function.h"

int main() {

	char charArr[8];
	int n = 8;

	acceptChar(charArr, n);
	displayChar(charArr, n);

	ReverseSameArray(charArr,n);

	printf("\nReverse Array : ");
	displayChar(charArr, n);
	

	return 0;
}