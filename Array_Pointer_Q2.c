#include<stdio.h>
#include "function.h"

int main() {
	int arr[8];

	acceptPointerInt(&arr,8);
	displayPointerInt(&arr,8);

	return 0;
}