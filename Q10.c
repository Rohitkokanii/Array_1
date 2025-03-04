/*
Q 10)
Declare and initialise an array , right rotate and print
Hint : In main () function Declare array
Accept() function accepts all array elements from user
display() function display an array elements
RightRotate() function will right rotate all array elements
*/


#include<stdio.h>
#include "function.h"

int main() {
	 
	char ch[8];
	int n = 8;
	acceptChar(ch, n);
	RightRotate(ch, n);
	displayChar(ch, n);
	return 0;
}
