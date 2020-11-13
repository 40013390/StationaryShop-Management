#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include "Stationary.h"
#include "test_Stationary.h"
int main()
{
	int items[]={0,0,0,0,0,0},in=-1;
	printf("----------Welcome to Stationary shop management:---------");
	while(in!=0){
		printf("\n\n"
		"Enter your choice:\n\n"

		"1 Buy Books\n"
		"2 Buy stationary\n"
		"3 Bill\n"
		"4 Admin Options\n"
		"0 Exit\n");
		scanf("\n%d",&in);
		system("cls");
		switch(in)
		{
			case 1:{
				book_cal(items);
				break;
			}
			case 2:{
				si_cal(items);
				break;
			}
			case 3:{
				bill(items);
				break;
			}
			case 4:{
				add_items();
				break;
			}
		}
	}
	test_main();
return 0;
}
