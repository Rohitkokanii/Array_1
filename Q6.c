//Q6
/*
Q 6) Declare and initialise an integer array
Print Only Even Numbers
Print multiplication table for those array elements which are completely
divisible by 7
Print only prime numbers
Print only palindrome numbers
Print only armstrong numbers

Hint : In main () function Declare array
Accept() function accepts all array elements from user
Display() function display an array elements
PrintEven() prints all even integer values
MultiplicationTableDivisibleBy7() will print multiplication table for numbers divisible by 7
CheckPrime() function print Only prime numbers
Checkpalindrome() function print only palindrome numbers
CheckArmstrong() function check for Armstrong numbers and print
*/

#include<stdio.h>
#include "function.h"

int main() {
	int arr[8],choice;
	printf("\nEnter \n1.PrintEven \n2.MultiplicationTableDivisibleBy7() \n3.CheckPrime \n4.Checkpalindrom \n5.CheckArmstrong \n=  ");
	scanf_s("%d", &choice);

	switch (choice) {
	case 1:printf("\n1.PrintEven\n");
		acceptInt(arr, 8);
		printEven(arr,8);
		break;
	case 2:printf("\n2.MultiplicationTableDivisibleBy7()\n");
		acceptInt(arr, 8);
		MultiplicationTableDivisibleBy7(arr, 8);
		break;
	case 3:printf("\n3.CheckPrime \n");
		acceptInt(arr, 8);
		CheckPrime(arr, 8);
		break;
	case 4:printf("\n4.Checkpalindrom  \n");
		acceptInt(arr, 8);
		Checkpalindrom(arr, 8);
		break;
	case 5:printf("\n5.CheckArmstrong\n");
		acceptInt(arr, 8);
		CheckArmstrong(arr,8);
		break;
	default:
		printf("\nInvalid Input\n");
	}
	

	return 0;
}