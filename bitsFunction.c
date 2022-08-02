#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void printCharInBinary(char ch);
void printIntInBinary(int num);
int mul(char a, char b);
void isCharInInt(int a, char b);

void main() {


}


//print an char in binary digit
void printCharInBinary(char ch) {

	unsigned char temp;

	for (int i = 0; i < 8; i++) {

		temp = ch << i;

		printf("%d ", temp >> 7);
		if (i == 3)printf(" , ");
	}
	printf("\n");
}


//print an int in binary digit
void printIntInBinary(int num) {

	unsigned int temp;

	int count = 1;

	for (int i = 0; i < 32; i++, count++) {

		temp = num << i;

		printf("%d ", temp >> 31);
		if (count % 4 == 0 && count < 32)printf(" , ");
	}

	printf("\n");
}


//multiplies characters without using '*'
int mul(char a, char b) {

	unsigned int aa = a;
	unsigned int bb = b;
	int sum = 0;
	while (bb)
	{
		if (1 & bb) {
			sum += aa;
		}
		bb = bb >> 1;
		aa = aa << 1;
	}
	return sum;
}

//print if the char exist in the int (in bits form)
void isCharInInt(int a, char b) {
	unsigned char temp = 0;

	for (int i = 0; i < 25; i++) {
		temp = a >> i;
		if (temp == b) {
			printf("start in index %d from right\n", i + 7);
			break;
		}
	}
}
