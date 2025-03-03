#include<stdio.h>

//int

void acceptInt(int arr[],int n) {
	printf("Enter int Array = ");
	for (int i = 0; i < n; i++) {
		scanf_s("%d",&arr[i]);
	}

}

void displayInt(int arr[],int n) {

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}


//char 

void acceptChar(char arr[], int n) {
	printf("\nEnter char Array = ");
	for (int i = 0; i < n; i++) {
		scanf_s(" %c", &arr[i],1);
	}

}

void displayChar(char arr[], int n) {

	for (int i = 0; i < n; i++) {
		printf("%c ", arr[i]);
	}
}

//float

void acceptFloat(float arr[], int n) {
	printf("\nEnter float Array = ");
	for (int i = 0; i < n; i++) {
		scanf_s(" %f", &arr[i]);
	}

}

void displayFloat(float arr[], int n) {

	for (int i = 0; i < n; i++) {
		printf("%g ", arr[i]);
	}
}

//double

void acceptDouble(double arr[], int n) {
	printf("\nEnter double Array = ");
	for (int i = 0; i < n; i++) {
		scanf_s(" %lf", &arr[i]);
	}

}

void displayDouble(double arr[], int n) {

	for (int i = 0; i < n; i++) {
		printf("%g ", arr[i]);
	}
}


//Question 2;

//int
void displayIntAlt(int arr[], int n) {

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			printf("%d ", arr[i]);
		}
	}
}

//char
void displayCharAlt(char arr[], int n) {

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			printf("%c ", arr[i]);
		}
	}
}

//float

void displayFloatAlt(float arr[], int n) {

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			printf("%f ", arr[i]);
		}
	}
}

//Double

void displayDoubleAlt(double arr[], int n) {

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			printf("%lf ", arr[i]);
		}
	}
}

//Q3
//integer

void manipulateChar(char ch[]) {
	int index;
	char newValue;
	printf("\nEnter idex = ");
	scanf_s("%d", &index);
	printf("\nEnter New Value = ");
	scanf_s(" %c", &newValue,1);
	ch[index] = newValue;
}

//character

void manipulateInt(int arr[]) {
	int index;
	int newValue;
	printf("\nEnter idex = ");
	scanf_s("%d", &index);
	printf("\nEnter New Value = ");
	scanf_s("%d", &newValue);
	arr[index] = newValue;
}


//Q4
//char

void swapChar(char ch[]) {
	
	int inx_1 = ch[3];
	int inx_2 = ch[5];

	int temp = inx_1;
	inx_1 = inx_2;
	inx_2 = temp;
	ch[3] = inx_1;
	ch[5] = inx_2;
}

//int

void swapInt(int arr[]) {

}