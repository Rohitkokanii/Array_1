

#include<stdio.h>
#include "function.h"

int main() {
	int arr[5];
	char ch[5];
	float fl[5];
	double dl[5];

	//int* p;
	//p = &arr[0];

	int n = 5;

	int choice;
	printf("\n\nArray Using Pointer : \n\n");
	printf("\nEnter \n1.Integer \n2.Character \n3.Float \n4.Double \n5.Exit \n= ");
	scanf_s("%d", &choice);

	switch (choice) {
	case 1:
		printf("\n\nInteger\n\n");
		//Int
		acceptInt(&arr, n);
		displayInt(&arr, n);
		break;
	case 2:
		//Char
		printf("\n\nCharacter\n\n");
		acceptChar(&ch, n);
		displayChar(&ch, n);
		break;
	case 3:
		//Float
		printf("\n\nFloat\n\n");
		acceptFloat(&fl, n);
		displayFloat(&fl, n);
		break;
	case 4:
		//Double
		printf("\n\nDouble\n\n");
		acceptDouble(&dl, n);
		displayDouble(&dl, n);
		break;
	case 5:
		printf("\nExit\n");
		break;
	default:
		printf("\nInvalid input\n");
	}
	return 0;
}
