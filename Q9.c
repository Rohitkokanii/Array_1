/*
Q 9) Declare and initialise an array , left rotate and print
Hint : In main () function Declare array
Accept() function accepts all array elements from user
display() function display an array elements
LeftRotate() will left rotate all array elements
*/

#include<stdio.h>
#include "function.h"

int main() {

	char ch[8];

	acceptChar(ch, 8);
	displayChar(ch, 8);
	leftRotate(ch, 8);
	displayChar(ch, 8);
	printf("\n");
	return 0;
}