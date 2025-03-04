/*
Q 11) Declare and initialise two array elements of same data type , copy both array into
third array

Hint : In main () function Declare array
Accept() function accepts all array elements from user
display() function display an array elements
MergelntoThird() will copy both array into third

*/

#include<stdio.h>
#include "function.h"

int main() {

	char arr_1[4];
	char arr_2[8];
	char mergeArr[12];

	acceptChar(arr_1, 4);
	printf("\nEnter Second Array : \n\n");
	acceptChar(arr_2, 8);

	printf("\nFirst Array : \n");
	displayChar(arr_1, 4);
	printf("\nSecond Array : \n");
	displayChar(arr_2, 8);

	MergelntoThird(arr_1, arr_2,4,8, mergeArr,12);

	printf("\nMerged Array : \n");
	displayChar(mergeArr, 12);
	return 0;
}