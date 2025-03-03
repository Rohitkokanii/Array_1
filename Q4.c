//Q4

#include<stdio.h>
#include "function.h"

int main() {

	char ch[8];
	int arr[8];

	int choice;
	printf("\nEnter \n1.Integer \n3.Character \n3.Exit \n=");
	scanf_s("%d", &choice);

	switch (choice) {
	case 1:printf("\n\nSwap Int Value\n\n");
		acceptInt(arr, 8);

		swapInt(arr);
		printf("\n\nAfter Swap\n\n");

		displayInt(arr, 8);
		break;
	case 2:
		printf("\n\nSwap Character Value\n\n");
		acceptChar(ch, 8);

		swapChar(ch);
		printf("\n\nAfter Swap\n\n");

		displayChar(ch, 8);
		break;
	case 3:
		printf("\nExit!!\n");
		break;
	default:
		printf("\nInvalid input\n");
	}


	return 0;
}