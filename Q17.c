/*Q 17) Accepts marks of 7 subjects from the user (maximum marks are 80) , Calculate
percentage and display.
+ Hint : In main () function Declare array
+ Accept() function accepts all array elements from user
+ display() function display an array elements
+ CalculatePercentage()
*/

#include<stdio.h>
#include "function.h"


int main() {
	int mark[7];
	int n = 7;
	acceptMarks(mark,n);
	CalculatePercentage(mark,n);

	return 0;
}