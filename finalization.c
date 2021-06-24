//#include "struct.h"
#include "common.h"
#include "main_menu.h"
void finalization()
{
	getchar() ;
	system("cls") ;
    system("color 2A") ;
    puts("\n\t\t\t\tConfirm Order") ;
    if (user.total==0){
    	printf("\n\t\t\tYou did not shop at all") ;
    	printf("\n\\t\t\tPress any key to get to main menu.") ;
    	getch() ;
    	main_menu() ;
	}
	else{
		printf("\n\t\tYour cost is : %ld taka\n",user.total) ;
		printf("\n\t\t\tVat is : 0 taka\n") ;
		printf("\n\n\t\t     Your total cost from this category\n\n");
    	puts("       -------------------------------------------------------");
		//puts("       -------------------------------------------------------");
		printf("\n\t\tYour total cost is : %ld taka\n",user.total) ;
		
	}
		FILE *s ;
		s = fopen("buy-sell.txt","a+") ;
		fprintf(s,"\n\t\tYour cost is : %ld taka\n",user.total) ;
		fprintf(s,"\n\t\t\tVat is : 0 taka\n") ;
		fprintf(s,"\n\n\t\t     Your total cost from this category\n\n");
    	fprintf(s,"       -------------------------------------------------------");
		//puts("       -------------------------------------------------------");
		fprintf(s,"\n\t\tYour total cost is : %ld taka\n",user.total) ;
		printf("press any key to continue....................") ;
		getchar() ;
		system("cls") ;
		printf("\n\nDo you want to quit . press [0] for quit and [1] for main menu") ;
		int chh ;
		scanf("%d",&chh) ;
		if (chh==0){
			quit() ;
		}
		else{
			main_menu() ;
		}
		
}


