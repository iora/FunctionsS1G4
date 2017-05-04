#include<stdio.h>

/*
*	Please define your functions after main().
*	You can import standard C / C++ libraries.
*	Recommended: add description of your code.
*/

int getSum(int myArray[]);
int getSumOfSquares(int myArray[]);
void printAsChars(int myArray[]);
double getAverage(int myArray[]);
int subtractAllValues(int myArray[]);
float invertAllValues(int myArray[]);
void printGroupMemberNames();

int main(void) {
	printGroupMemberNames();

	int row[500], i;
	for (i = 0; i < 500; i++)
		row[i] = i;

	printf("The invertallvalues of all number is:\n", invertAllValues(row));
	for (i = 0; i < 500; i++) {
		printf("%d ", row[i]);
	}
	printf("\nThe subtractallvalues of all number is: %d\n", subtractAllValues(row));
	printf("The sumofsquares of all number is: %d\n", getSumOfSquares(row));
	printf("The averange of all number is: %f\n", getAverage(row));
	printf("The sum of all number is: %d\n", getSum(row));
	printf("printAsChars function:");
	printAsChars(row);
	return 0;
}
float invertAllValues(int myArray[]) //invertAllValues
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
void printAsChars(int myArray[]) { //printAsChars
	int iCharLen = 500;
	int i;

	for (i = 0; i<iCharLen; i++)
	{
		printf("%c", myArray[i]);
	}
}
int getSumOfSquares(int myArray[]) //getSumSquares
{
	int i;
	int sum = 0;
	for (i = 0; i < 500; i++)
	{
		sum += myArray[i] * myArray[i];
	}
	return sum;
}
int subtractAllValues(int myArray[]) //SubtractAllValues
{
	int i;
	//printf("subtractAllValues = ");
	for (i = 0; i<500; ++i) {
		myArray[i] = -myArray[i];
	}
}
double getAverage(int myArray[]) //getAvg
{
	double total = 0;
	int count = 0;
	int i;
	for (i = 0; i < 500; ++i) {
		total += myArray[i];
		count++;
	}
	return total / count;
}
int getSum(int myArray[]) //getSum
{
	int i;
	int sum = 0;
	for (i = 0; i<500; ++i)//iterate from 0 up to 499
		sum += myArray[i];//increment sum by myArray[i]
	return sum;
}

void printGroupMemberNames() {
	printf("Dara Chheang\n");
	printf("Ratanaphea Chan\n");
	printf("Chhorleang Horm\n");
	printf("Sotheng Chheang\n");
	printf("Savorn Chea\n");
	printf("Madalen Iv\n");
}