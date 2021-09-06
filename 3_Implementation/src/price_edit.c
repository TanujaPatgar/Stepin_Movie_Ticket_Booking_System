#include "declaration.h"
#include "string.h"
//#include "movie_details.c"

int change_prize(int prize)
{
	char pass[10],pak[10]="pass";
	printf("Enter the password to change price of ticket: ");
	scanf("%s",&pass);
	if (strcmp(pass,pak)==0)
	{
		printf("Please enter new price: ");
		scanf("%d",&prize);
		system("PAUSE");
		system("CLS");
	}
	else 
		printf("The entered password is wrong! Please Enter Correct Password\n  ");
	return prize;
}