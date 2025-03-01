#include<stdio.h>

int main() {

	int arr[5];

	printf("\nEnter 5 no. = ");

	for (int i = 0; i <= 4; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (int j = 0; j <= 4; j++) {
		printf("%d ", arr[j]);
	}

	return 0;
}
