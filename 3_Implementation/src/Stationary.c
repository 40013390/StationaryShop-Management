#include<stdio.h>
#include<conio.h>
#include<string.h>
struct book
{
	char buk[20][20];
	int schandphy;
	int bsgrewal;
	int letusc;
}book_obj={{"schand phy","bs grewal","let us c"},20,20,20};
struct stationary_items
{
int pencil;
int pen;
int scissors;
}si_obj = {20,20,20};

int book_cal(int *items)
{
	int count,in=-1;
	printf("\nEnter your choice:\n 1-> schand physics -(Rs 200 each)\n"
	   " 2-> bs grewal maths -(Rs 400 each)\n 3-> let us c -(Rs 150 each)\n");
	scanf("%d",&in);
	switch(in)
	{
        case 1:
       	 	{
         	       printf("Enter number of copies :");
			scanf("%d",&count);
			if(count<=book_obj.schandphy)
        	        {
				book_obj.schandphy=book_obj.schandphy-count;
        	                items[3]=items[3]+count;
        	        }
        	        else
        	        {
				printf("%d item(s) available",book_obj.schandphy);
			}
			break;
		}
	 case 2:
		{
			printf("Enter number of copies :");
			scanf("%d",&count);
			if(count<=book_obj.bsgrewal)
			{
				book_obj.bsgrewal=book_obj.bsgrewal-count;
				items[4]=items[4]+count;
			}
			else
			{
				printf("%d item(s) available",book_obj.bsgrewal);
			}
			break;
		}
	case 3:
		{
			printf("Enter number of copies :");
			scanf("%d",&count);
			if(count<=book_obj.letusc)
			{
				book_obj.letusc=book_obj.letusc-count;
				items[5]=items[5]+count;
			}
			else
			{
				printf("%d item(s) available",book_obj.letusc);
			}
			break;
		}
	}
	return 0;

}

int si_cal(int *items)
{
	int count,in=-1;
	printf("Enter your choice:\n"
           "1-> pencils  (Rs 10 each)\n"
           "2-> pens     (Rs 30 each)\n"
           "3-> Scissors (Rs 50 each)\n");
	scanf("%d",&in);
	switch(in)
	{
        case 1: 
		{
                	printf("Enter number of pencils :");
			scanf("%d",&count);
			if(count<=si_obj.pencil)
                    	{
				si_obj.pencil=si_obj.pencil-count;
				items[0]=items[0]+count;
			}
			else
                	{
				printf("%d item(s) available",si_obj.pencil);
			}
			break;
		}
        case 2:
		{
			printf("Enter number of pens :");
			scanf("%d",&count);
			if(count<=si_obj.pen)
                    	{
                        	si_obj.pen=si_obj.pen-count;
                        	items[1]=items[1]+count;
                    	}
                    	else
                    	{
                        	printf("%d item(s) available",si_obj.pen);
                    	}
			break;
                }
        case 3: 
		{
			printf("Enter number of scissors :");
			scanf("%d",&count);
			if(count<=si_obj.scissors)
                	{
                        	si_obj.scissors=si_obj.scissors-count;
				items[2]=items[2]+count;
			}
			else
                    	{
				printf("%d item(s) available",si_obj.scissors);
                    	}
			break;
                 }
	}
	return 0;
}

int bill(int *items)
{
	float disc=0.0,amount=0.0;
	int on,pay,old;
 	amount=(items[0]*10)+(items[1]*30)+(items[2]*50)+(items[3]*200)+(items[4]*400)+(items[5]*150);
	tems[0]!=0?printf("\n\npencil            :%d \n",items[0]):printf("");
 	items[1]!=0?printf("pens              :%d \n",items[1]):printf("");
	items[2]!=0?printf("scissors          :%d \n",items[2]):printf("");
	items[3]!=0?printf("schand physics    :%d \n",items[3]):printf("");
	items[4]!=0?printf("bs grewal maths   :%d \n",items[4]):printf("");
	items[5]!=0?printf("let us c	      :%d \n",items[5]):printf("");
	printf("----------------------------------------------------\n\n");
	printf("Amount= %f",amount);
	if((items[3]+items[4]+items[5])>=5||(items[0]+items[1]+items[2])>=10||amount>=1000)
        	disc=amount/4;
        else
	{
        	disc=0;
    	}
        pay=(amount-disc);
        old=((amount-disc)-(amount/5));
        printf("\n\nAre u an old customer press (1) or new customer (0)\n  ");
        scanf("%d",&on);
        if (on==1)
        {
            printf("\nyour total amount is: RS. %f",amount);
            printf("\n\nYOU CAN PAY  : RS. %d",old);
        }
        else
        {
            printf("\nyour total amount is: %f",amount);
            printf("\n\nYOU CAN PAY : RS. %d",pay);
        }
    return 0;
}
void display_items()
{
	printf("pens              :%d \n",si_obj.pen);
	printf("pencil            :%d \n",si_obj.pencil);
	printf("scissors          :%d \n",si_obj.scissors);
	printf("schand physics    :%d \n",book_obj.schandphy);
	printf("bs grewal maths   :%d \n",book_obj.bsgrewal);
	printf("let us c          :%d \n\n",book_obj.letusc);
}

int add_items()
{
	char pwd[20]={"csepbl"},s[20];
	printf("Enter the password:");
	scanf("%s",&*s);
	if(strcmp(pwd,s)!=0)
    	{
        	printf("\n NOTE : Enter correct password");
    	}
    	else
    	{
    		int in=0;
        	while(in!=-1)
        	{
        		printf("\nEnter choice:\n"
				
			       "Enter -1 to exit\n"
                      	       "Enter  1 to Display Items\n"
                      	       "Enter  2 to Add items\n");
            		scanf("%d",&in);
            		switch(in)
            		{
                		case -1:
                        	{
                                       break;
                        	}
                		case 1:
                        	{
                        	    system("cls");
                        	    display_items();
                            	    break;
                        	}
                		case 2:
                        	{
                        	    int ch=0;
                            	    printf("\nEnter your choice:\n"
                                	"1 pencils \n2 pens \n3 scissors\n4 schand physics"
                                	"\n5 bs grewal maths\n6 let us c\n");
                            	    scanf("%d",&ch);
                            	    int count;
                            	    switch(ch)
                            	    {
                                	case 1:
                                	{
                                	    printf("\nEnter the number of pencils: ");
                                	    scanf("%d",&count);
                                    	    if(count>0)
                                    	    {
                                        	si_obj.pencil=si_obj.pencil+count;
                                       		printf("\nAdded succesfully");
                                    	     }
                                    	     else
                                    	     {
                                        	printf("\nInvalid Input");
                                    	}
                                    	break;
                                     	}
                                	case 2:
                                	{
						printf("\nEnter the number of pens: ");
						scanf("%d",&count);
						if(count>0)
						{
							si_obj.pen=si_obj.pen+count;
							printf("\nAdded succesfully");
						}
						else
						{
							printf("\nInvalid Input");
						}
						break;
					}
					case 3:
					{
						printf("\nEnter the number of scissors: ");
						scanf("%d",&count);
						if(count>0)
						{
							si_obj.scissors=si_obj.scissors+count;
							printf("\nAdded succesfully");
						}
						else
						{
							printf("\nInvalid Input");
						}
						break;
					}
					case 4:
					{
						printf("\nEnter the number of books: ");
						scanf("%d",&count);
						if(count>0)
						{
							book_obj.schandphy=book_obj.schandphy+count;
							printf("\nAdded succesfully");
						}
						else
						{
							printf("\nInvalid Input");
						}
						break;
					}
					case 5:
					{
						printf("\nEnter the number of books: ");
						scanf("%d",&count);
						if(count>0)
						{
							book_obj.bsgrewal=book_obj.bsgrewal+count;
							printf("\nAdded succesfully");
						}
						else
						{
							printf("\nInvalid Input");
						}
						break;
					}
					case 6:
					{
						printf("\nEnter the number of books: ");
						scanf("%d",&count);
						if(count>0)
						{
							book_obj.letusc=book_obj.letusc+count;
							printf("\nAdded succesfully");
						}
						else
						{
							printf("\nInvalid Input");
						}
						break;
					}
				}
				break;
			}
			default :
			{
				if(in!=-1)
				printf("\nInvalid choice");
				break;
			}
		}

	}
    }
return 0;
}

