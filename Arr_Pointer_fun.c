#include<stdio.h>

//int

void acceptInt(int* arr, int n) {
	printf("Enter int Array = ");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", arr+i);
	}

}

void displayInt(int* arr, int n) {

	for (int i = 0; i < n; i++) {
		printf("%d ", *(arr+i));
	}
}


//char 

void acceptChar(char* arr, int n) {
	printf("\nEnter char Array = ");
	for (int i = 0; i < n; i++) {
		scanf_s(" %c", arr+i, 1);
	}

}

void displayChar(char* arr, int n) {

	for (int i = 0; i < n; i++) {
		printf("%c ", *(arr+i));
	}
}

//float

void acceptFloat(float* arr, int n) {
	printf("\nEnter float Array = ");
	for (int i = 0; i < n; i++) {
		scanf_s(" %f", arr+i);
	}

}

void displayFloat(float* arr, int n) {

	for (int i = 0; i < n; i++) {
		printf("%.2f ", *(arr+i));
	}
}

//double

void acceptDouble(double* arr, int n) {
	printf("\nEnter double Array = ");
	for (int i = 0; i < n; i++) {
		scanf_s(" %lf", arr+i);
	}

}

void displayDouble(double* arr, int n) {

	for (int i = 0; i < n; i++) {
		printf("%.2f ", *(arr+i));
	}
}

void acceptPointerInt(int* p, int n) {
	printf("\nEnter Int Array : ");
	for (int i = 0; i < n; i++) {
		scanf_s("%d",p+i);
	}
}

void displayPointerInt(int* p, int n) {
	printf("\ndisplayedIntArray : ");
	for (int i = 0; i < n; i++) {
		if(i%2==0){
		printf("%d ",*(p+i));
	
		}
	}
}