#include "common.h"
void search()
{
	printf("\t\tEnter price range you want to search low and high :") ;
	int lo , hi ;
	scanf("%d %d",&lo,&hi) ;
	int cou = 0;
	for (i = 0 ; i < user.lap ; i++){
		if (user.lap_price[i]>lo&&user.lap_price[i]<hi){
			cou++ ;
			printf("\n%d. %s \nPrice : %d taka\nIn stock : %d\n",cou+1,user.laptops[i],user.lap_price[i],user.lap_stock[i]) ;
		}
	}
	printf("\n\t\tTotal laptops found at your range : %d",cou+1) ;
}
