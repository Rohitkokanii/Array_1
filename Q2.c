#include<stdio.h>
#include "function.h"


int main() {

	int arr[8];
	char ch[8];
	float fl[8];
	double dl[8];
	
	int n = 8;

	int choice;
	printf("\nEnter \n1.Integer \n2.Character \n3.Float \n4.Double \n5.Exit \n= ");
	scanf_s("%d", &choice);

	switch (choice) {
	case 1:
		printf("\n\nInteger\n\n");
		//Int
		acceptInt(arr, n);
		displayIntAlt(arr, n);
		break;
	case 2:
		//Char
		printf("\n\nCharacter\n\n");
		acceptChar(ch, n);
		displayCharAlt(ch, n);
		break;
	case 3:
		//Float
		printf("\n\nFloat\n\n");
		acceptFloat(fl, n);
		displayFloat(fl, n);
		break;
	case 4:
		//Double
		printf("\n\nDouble\n\n");
		acceptDouble(dl, n);
		displayDoubleAlt(dl, n);
		break;
	case 5:
		printf("\nExit\n");
		break;
	default:
		printf("\nInvalid input\n");
	}

	return 0;
}