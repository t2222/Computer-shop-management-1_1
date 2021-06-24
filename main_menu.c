//#include "struct.h"
#include "main_menu.h"
#include "common.h"
#include<time.h>
void main_menu()
{
	system("cls");
	time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    system("cls");
    system("color A");
    printf(" Today:\t\t\t\tUser: %s\n %d-%d-%d\n",user.username_log_file,tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900);
	int aa;
	system("color A") ;
	for (aa =0 ; aa < 5 ; aa++){
		printf("\t\t\t-_-_-_-_-_-_-_-_-_-_-\n") ;
		printf("\t\t\t*******************************\n")	;
	}
	printf("\n\t\t\t\t>>Main menu<<\n\n\t\t\t     Input 1 For Laptop Shopping\n\n\t\t\t     Input 2 for Finalization\n\n\t\t\t    Input 3 for admin panel\n\n\t\t\t    Input 4 for search through a particular range\n\n\n\n\t\t\t\t    Input 0 for quit\n\n\n\n\t\t\t\t    Choice: ");
	scanf("%d",&user.main_menu) ;
	system("cls") ;
	switch(user.main_menu){
	case 1:
			laptop() ;
			break ;
    case 0:
        quit();
        system("cls");
        break;
    case 2:
    	//system("cls") ;
    	finalization() ;
    	break ;
    case 3:
    	system("cls") ;
    	admin() ;
		break ;	
	case 4:
		search() ;
		getchar() ;
		main_menu() ;
		break ;
    default:
        main_menu();
        break;
	}	
}


