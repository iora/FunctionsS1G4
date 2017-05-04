#include <stdio.h>

/*
*	Please define your functions after main().
*	You can import standard C / C++ libraries.
*	Recommended: add description of your code.
*/

//int getSum(int myArray[]);
//int getSumOfSquares(int myArray[]);
//void printAsChars(int myArray[]);
//double getAverage(int myArray[]);
//int subtractAllValues(int myArray[]);
float invertAllValues(int myArray[]);
void printGroupMemberNames();

int main(void) {
	printGroupMemberNames();

	int row[500], i;
	for (i = 0; i < 500; i++)
		row[i] = i;
	invertAllValues(row);

	return 1;
}

float invertAllValues(int myArray[])
{
	int myBrray[500];
	int i;
	float s = 0;
	for (i = 0; i<500; ++i)
		myBrray[i] = myArray[499 - i];

	for (i = 0; i<500; ++i)
		myArray[i] = myBrray[i];
	return 0;
}




void printGroupMemberNames() {
	printf("Dara Chheang\n");
	printf("Ratanaphea Chan\n");
	printf("Chhorleang Horm\n");
	printf("Sotheng Chheang\n");
	printf("Savorn Chea\n");
	printf("Madalen Iv\n");
}
