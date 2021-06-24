#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<string.h>
#include<time.h>
struct laptop{
	char laptops[50][100] ;
	int lap_stock[50] , lap_price[50] , lap ;
	long int total , lap_budget , sold_price[50] ;
	int sold_list[50] , sold_quantity[50]  , eq_list[50] ;
	char lap_sold_name[50][100] ;
	int main_menu ;
	int log_u , log_p , log_p_n , log_u_n ;
	char username[55],username_log[55],username_log_file[55],pass1[30],pass2[30],pass3[30],pass4[30],profile_select,quit,main_menu_;
}user;
int i , j , k , l , m , q , n , o , ch , ch1 , ch2 , tmp_quan;
int tmp ;
char choice ;
FILE *profile , *fp , *b ;
void main_menu();
void quit();
void alliteam();
void laptop();
void finalization() ;
void update();
void admin() ;
void signup_login() ;
void signup() ;
void login() ;
void alliteam()
{
		strcpy(user.laptops[0],"Dell Inspiron Rocket 11-3162 (Processor: 1.6 GHz, RAM: 2 GB, 500 GB)");
        user.lap_price[0]=20500;
        user.lap_stock[0]=30;
        strcpy(user.laptops[1],"Asus X540YA AMD E1-7010 (1.50 GHz, 4 GB, 500 GB)");
        user.lap_price[1]=21800;
        user.lap_stock[1]=24;
        strcpy(user.laptops[2],"Lenovo IP320 (2.40 GHz, 4 GB, 1 TB)");
        user.lap_price[2]=36500;
        user.lap_stock[2]=41;
        strcpy(user.laptops[3],"Acer Aspire ES1-533(2.5 GHz, 4 GB, 1 TB)");
        user.lap_price[3]=26000;
        user.lap_stock[3]=36;
        strcpy(user.laptops[4],"Acer Aspire V3-574G(2.40 GHz, 8 GB, 2 TB)");
        user.lap_price[4]=59300;
        user.lap_stock[4]=18;
        strcpy(user.laptops[5],"Acer TravelMate TMP246-MG(2.20 GHz, 4 GB, 1 TB) 14 Inch Nvidia 2 GB");
        user.lap_price[5]=41000;
        user.lap_stock[5]=25;
        strcpy(user.laptops[6],"HP OMEN 15-AX221TX(3.8 GHz, 16 GB, 1 TB & 128 GB)");
        user.lap_price[6]=127000;
        user.lap_stock[6]=7;
        user.lap=7;
}
void additeam()
{
	int *a[50] ;
	int row , col ;
	printf("how many iteams you want to add : ") ;
	scanf("%d",&n) ;
	char str[50][100] ;
	/*
	for (i = 0 ; i < n ; i++){
		gets(str) ;
		for (row = 7 ; row<50 ; row++){
			a[row] = (char*)malloc(100*sizeof(char)) ;
		}
	strcpy(a[row],gets) ;	
	}
	*/
	int cnt = 7 ;
	for (i = 0 ; i < n ; i++){
		scanf("%s",str);
		strcpy(user.laptops[cnt++],str) ;
		printf("%s",user.laptops[cnt]) ;
	}
}
int main()
{
	alliteam() ;
	additeam() ;
}
