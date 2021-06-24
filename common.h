#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<string.h>
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
void search() ;

