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
	int inx_1 = arr[3];
	int inx_2 = arr[5];

	int temp = inx_1;
	inx_1 = inx_2;
	inx_2 = temp;
	arr[3] = inx_1;
	arr[5] = inx_2;

}

//Q5
 
void CopyInReverse(char ch[],int num) {

	for (int i = num-1,j=0; i >= 0 || j<num; i--,j++) {
		if (j >= i) {
			break;
		}
		else {
			int temp = ch[i];
			ch[i] = ch[j];
			ch[j] = temp;

		}
	}

}

//Q6
//printEven
void printEven(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			printf(" %d ", arr[i]);
		}
	}
}

//MultiplicationTableDivisibleBy7

void MultiplicationTableDivisibleBy7(int arr[], int n) {
	printf("\n");
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= 10; j++) {
			if (arr[i] % 7 == 0) {
				printf("%d\n", arr[i] * j);
			}
		}
		printf("\n");
	}
}

//CheckPrime(arr, 8);

void CheckPrime(int arr[], int n) {

	for (int i = 0; i < n; i++) {
		int num = arr[i];
		int isPrime = 1;
		for (int j = 2; j < num; j++) {
			if (num % j == 0) {
				isPrime = 0;
				break;
			}


			if (isPrime) {
				printf("%d, ", arr[i]);
				break;
			}
		}
	}
}

//Checkpalindrom(arr, 8);

void Checkpalindrom(int arr[], int n) {

	printf("\nPalindrom No. = ");
	for (int i = 0; i < n; i++) {
		int num = arr[i];
		int orgNum = num;
		int lastDigit;
		int rev=0;
		while (num > 0) {
			lastDigit = num % 10;
			rev = rev * 10 + lastDigit;
			num /= 10;
		}
		if (rev == orgNum) {
			printf("%d, ", orgNum);
		}
	}
}

//CheckArmstrong(arr,8);

void CheckArmstrong(int arr[], int n) {
	printf("\nArmstrong No. = ");
	for (int i = 0; i < n; i++) {
		int num = arr[i];
		int orgNum = num;
		int temp = num;
		int lastDigit;
		int sum = 0;
		int count = 0;
		while (num > 0) {
			count++;
			
			num /= 10;
		}

		for (int i = 1; i <= count; i++) {
			lastDigit = temp % 10;
			int mult = 1;
			for (int j = 1; j <= count; j++) {
				mult = mult * lastDigit;
			}
			sum = sum + mult;

			temp /= 10;
		}
		if (sum == orgNum) {
			printf("%d, ", orgNum);
		}
	}
}

//Q7]

void PrintUpperCaseChar(char ch[], int n) {
	printf("\nUpper Case : ");
	for (int i = 0; i < n; i++) {
		if (ch[i] >= 65 && ch[i] <= 90) {
			printf("%c ", ch[i]);
		}
	}
	printf("\n");
}
void PrintASCll(char ch[], int n) {
	printf("\nASCII : ");
	for (int i = 0; i < n; i++) {
		printf("%d ", ch[i]);
	}
	printf("\n");
}

//Q8

void ConvertToUpperCase(char ch[],int n) {
	
	
	for (int i = 0; i < n; i++) {
		if (ch[i] >= 97 && ch[i] <= 122) {
			ch[i] = ch[i] - 32;
		}
	}

}

//Q9

void leftRotate(char ch[], int n) {

	char arr[8];
	for (int i = 0; i < n; i++) {
		int newIdx = (i + n-(n-1)) % n;
		
		arr[i] = ch[newIdx];
	}
	for (int i = 0; i < n; i++) {
		ch[i] = arr[i];
	}
	
	printf("\n\n\nNew Left Rotated Array : ");
	
}

//Q10

void RightRotate(int ch[],int n) {
	char arr[8];
	for (int i = 0; i < n; i++) {
		int newIdx = (i + n - 1) % n;

		arr[i] = ch[newIdx];
	}
	for (int i = 0; i < n; i++) {
		ch[i] = arr[i];
	}

	printf("\n\n\nNew Right Rotated Array : ");

}

//Q11


void MergelntoThird(char arr1[],char arr2[],int n1,int n2, char ch[], int n) {

	for (int i = 0; i < n1; i++) {
		ch[i] = arr1[i];
	}

	for (int i = 0; i < n2; i++) {
		ch[i + n1] = arr2[i];
	}

	/*
		if (i >= 0 && i <= 3) {
			ch[i] = arr1[i];
		}
		else if (i >= 4 && i < n) {
			int j = i - 4;
			ch[i] = arr2[j];
		}
	*/
}