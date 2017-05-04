#include <stdio.h> 

/*
*	Please define your functions after main().
*	You can import standard C / C++ libraries.
*	Recommended: add description of your code.
*/
//int getSum(int myArray[]);
//int getSumOfSquares(int myArray[]);
void printAsChars(int myArray[]);
//double getAverage(int myArray[]);
//int subtractAllValues(int myArray[]);
//float invertAllValues(int myArray[]);
// void printGroupMemberNames();

int main(void) {
	// 	printGroupMemberNames();

	int row[500];
	for (int i = 0; i < 500; i++) {
		row[i] = i;
	}

	printAsChars(row);
	getchar();
	return 0;
}
/*
void printGroupMemberNames() {
printf("Dara Chheang\n");
printf("Ratanaphea Chan\n");
printf("Chhorleang Horm\n");
printf("Sotheng Chheang\n");
printf("Savorn Chea\n");
printf("Madalen Iv\n");
}*/
void printAsChars(int myArray[]) {
	int iCharLen = 500;
	// define myArray[] length
	int i;
	for (i = 0; i<iCharLen; i++)
	{
		printf("%c", myArray[i]);
	}
	// 	printf("\n");
	// 	printf("Size of myArray = %d", sizeof(myArray));
	//printf("%c", myArray);

}