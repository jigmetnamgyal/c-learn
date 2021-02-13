#include <stdio.h>

/* function declaration */
void getRichQuickFake(int money);
int getRichQuickReal(int money);

int main () 
{
	/* Start with only $200 to my name. */
	int accountBalance = 200;
	printf("(main) I used to have $%d\n", accountBalance); // (main) I used to have $200

	/* Get rich (fake) quick with computer science! */
	getRichQuickFake(accountBalance);
	printf("(main) Now I have $%d\n", accountBalance); // (main)  Now I have $200

	/* Get rich (real) quick with computer science! */
	getRichQuickReal(accountBalance);
	printf("(main) Now I have $%d\n", accountBalance); // (main) Now I have $200

	/* Get rich (real) quick with computer science! */
	accountBalance = getRichQuickReal(accountBalance);
	printf("(main) Now I have $%d\n", accountBalance); // (main) Now I have $1000000

	return 0;
}


/* A function that (allegedly!) makes us have ten million dollars! */
void getRichQuickFake(int money) 
{
	/* Now I have ten million dollars! */
	money = 10000000;
	
	return;
}

/* A function that (really!) makes us have ten million dollars! */
int getRichQuickReal(int money) 
{
	/* Now I have ten million dollars! */
	money = 10000000;

	return money;
}