#include <stdio.h>

int main()
{
	int num1;
	int num2;
	double doubleNum;
	char firstInitial;
	char secondInitial;

	num1 = 4;
	num2 = 9;
	doubleNum = 6.6;
	firstInitial = 'C';
	secondInitial = 'K';	

	printf("The first number is %d and the second number is %d\n",num1,num2);
	printf("You can print numbers with decimals like %.1lf using the double data type\n",doubleNum);
	printf("My initials are %c.%c\n",firstInitial,secondInitial);

	return 0;
}
