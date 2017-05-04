#include <stdio.h>

#include <stdlib.h>




int getSum(int myArray[]);


int main(void) {

	//printGroupMemberNames();



	int row[500];

	for (int i = 0; i < 500; i++)

		row[i] = i;



	printf("%d", getSum(row));



	return 0;

}



int getSum(int myArray[])

{



	int i;

	int sum = 0;



	for (i = 0; i<500; ++i)//iterate from 0 up to 499

		sum += myArray[i];//increment sum by myArray[i]


	return sum;

}
