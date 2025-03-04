/*Q 14) Declare and initialise an integer array
Find Maximum value
Find Second maximum
Find minimum
Find second minimum

Hint : In main () function Declare array
Accept() function accepts all array elements from user
display() function display an array elements
Write FindLarge() , FindSmallest(), FindSecondLargest() , FindSecondSnallest()

*/

#include<stdio.h>
#include "function.h"

int main() {
	
	int intArr[8];
	int n = 8;
	
	acceptInt(intArr, n);
	//Max
	printf("\nMax : %d\n",max(intArr, n));

	//2nd_Max
	printf("\n2nd_Max : %d\n", FindSecondLargest(intArr,n));

	//min
	printf("\nMin : %d\n", FindSmallest(intArr,n));

	//min_2nd
	printf("\n2n_Min : %d\n", FindSecondSmallest(intArr,n));

	return 0;
}