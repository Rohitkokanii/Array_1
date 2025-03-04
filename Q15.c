/*
Q 15) Declare and initialise an array , ask user to enter value check weather that value is
present in array or not
Hint : In main () function Declare array
Accept() function accepts all array elements from user
display() function display an array elements
FindArrayElement()
*/

#include<stdio.h>
#include "function.h"

int main() {

	char charArr[8];
	int n = 8;

	acceptChar(charArr, n);
	displayChar(charArr, n);
	FindArrayElement(charArr,n);
	return 0;
}