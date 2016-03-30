#include <stdio.h>

int main()
{
	int i = 0;

	printf("While Loop:\n");
	while(i != 10) //Loop while i does NOT equal 10
	{
		printf("%d\n",i);
		i++; //Increments i so we can eventually meet the exit condition
	}

	i = 0;

	printf("Do while loop:\n");
	do
	{
		printf("%d\n",i);
		i++; //Increments i so we can eventually meet the exit condition

	}while(i != 10); //Loop while i does not equal 10

	return 0;
}
