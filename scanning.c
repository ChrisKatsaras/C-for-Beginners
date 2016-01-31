#include <stdio.h>

int main()
{
	int grade;
	char firstInit;
	char secondInit;
	double yearsOld;

	printf("Please input your first initial and press \"Enter\"\n"); //Note that \" lets your print a backslash
	scanf("%c",&firstInit); //scans and stores the character input
	getchar(); //gets rid of the "enter" character
	printf("Please input your second initial and press \"Enter\"\n");
	scanf("%c",&secondInit);
	getchar();

	printf("Please input what grade you got on your last test (0-100) and press \"Enter\"\n");
	scanf("%d",&grade);
	
	printf("Please input how old you are in years (including decimals. E.G 3.4) and press \"Enter\"\n");
	scanf("%lf",&yearsOld);

	printf("My initials are %c.%c . My most recent grade was a %d and I am currently %.1lf years old\n",firstInit,secondInit,grade,yearsOld); //Note that .1 before the lf will esure that only one decimal place is printed


	return 0;
}
