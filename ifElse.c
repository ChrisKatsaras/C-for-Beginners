#include <stdio.h>

int main()
{
	int num1;
	int num2;

	num1 = 6;
	num2 = 2;

	if(num1 > num2) //If num1 is greater than num2 
	{
		printf("Num 1 is the bigger number!\n");
	}
	else if(num1 == num2) //If num1 is equal to num2
	{
		printf("Num 1 is equal to Num 2");
	}
	else //Defualt statement, which in this scenario means num2 is greater than num1
	{
		printf("Num 2 is the bigger number");
	}

	return 0;
}