

/*
void count_laptop_price(int pr,int qu)
{
printf("\n\tTotal price of %d pcs %d no Laptop (%s) : %ld taka\n\t\tConfirm order ? Press /'y/or/'Y/'for YES and /'n/' for no :",q,ch,user.laptops[ch],q*user.lap_price[ch]) ;
}
void laptop()
{
	int x = 0 ; //traverses between sold stuffs
    system("cls");
    system("color 9F");
    puts("\n\t\t\t\tLaptops");
    printf("\n\n\t\tEnter laptop budget below. N.B: enter 0 for no budget\n\n\t\t\t\tBudget = ");
    scanf("%lu",&user.lap_budget);
    
    //show available laptops
    for (i = 0 , j = 0; i < user.lap ; i++){
    	if (user.lap_budget >= user.lap_price[i] || user.lap_budget == 0){
    		printf("\n%d. %s \nPrice : %d taka\nIn stock : %d\n",j+1,user.laptops[i],user.lap_price[i],user.lap_stock[i]) ;
    		j++ ; //serial counter
			}
	}
	printf("Total Laptops Found : %d pcs\n",j) ;
	
	//buy laptop , count price , handle invalid input
	while (1)
	{
	printf("\n\n\t\tEnter your choice (must be integer) for the laptop you want to buy\n\t\t(enter 0 for exit) :") ;
	scanf("%d",&ch) ;
	if (ch==0) break ;
	else if (ch<0||ch>j){
		printf("\n\t\tInvalid input . Input must be equal or less than %d\n",j) ;
	}
	else
	{
	--ch ; //ready for user.laptop[ch]
	printf("\n\t\tHow many ? (not more than the stock :) ) : ") ;
	scanf("%d",&q) ;
	int x1 ;
	count_laptop_price(q,user.lap_price[ch]) ;
	char z ;
	getchar();
scanf("%c",&z) ;
switch(z)
	{
		case 'y':
		case 'Y':
		{
			user.sold_quantity[x] = q ; //store quantity
			strcpy(user.lap_sold_name[x],user.laptops[ch]) ; //copy sold iteam names
			user.sold_price[x] = user.sold_quantity[x]*user.lap_price[ch] ; //store sold iteam price * no. of sold iteams	
			x++ ;
			break ;				
		}	
		default:
			//system("cls") ;
			printf("\n\t\tyou did not confirm oreder .") ;
			void laptop();
			break;		
	}
	}
	} 
	
	puts("\n\t\tPress any key to show the bought products............") ;
	getchar() ;
	system("cls") ;
	
	//show bought products
	for (i = 0 ; i < x ; i++){
		printf("\n\n\t\tSelected laptop : %d. %s\n\t\tOrdered quantity : %d pcs\n\t\tTotal price : %ld taka\n",
				   i+1,user.lap_sold_name[i],user.sold_quantity[i],user.sold_price[i]) ;
	}
	
	puts("\n\t\tPress any key to show the total price of products............") ;
	getchar() ;
	
	//count total price
	user.total = 0 ;
	for (i = 0 ; i < x ; i++){
		user.total += user.sold_price[i] ;
	}
	printf("\n\t\tTotal cost is :%ld taka",user.total) ;
	getchar() ;
	
	printf("\n\t\tWant to remove iteams ? Enter your choice (\'n\' NO and \'y\' YES)\n\t\tEnter :") ;
	//delete products
	scanf("%c",&choice) ;
	getchar() ;
	if (choice=='y'||choice=='Y'){
	int del ;
	while(1)
	{
		printf("\n\n\t\tInsert the serial of bought iteams you want to delete (press 0 to exit): ") ;
		scanf("%d",&del) ;
		if (del==0) break ;
		printf("\n\t\tDelete this iteam completely ? :\n\tEnter \'1\' for yes\n\tEnter \'0\' for no(deleting quantity)\n") ;
		printf("\n\t\tEnter Your Choice : ") ;
		scanf("%d",&ch1) ;
		if (ch1==0){		//remove some quantity
			printf("\n\n\t\tHow many iteams need to be removed ? Input :") ;
			scanf("%d",&q) ;
			--del ;
			tmp_quan = user.sold_quantity[del] ; //store previously ordered quan in tmp_quan
			user.sold_quantity[del] -= q ; // remove required iteams
			tmp = user.sold_price[del] ; //store prev. sold price
			//find index of sold product in original name list , then use it to find its price
			//then multiply with no. of products to be removed and '-' with sold_price[del] 
			i = 0 ;
			while (1)
			{
				if(strcmp(user.laptops[i],user.lap_sold_name[del])!=0){
					i++ ;
				}
				else{
					break ;
				}
			}
			user.sold_price[del] -= user.lap_price[i]*q ;
			}
			
		else //totally remove
		{
			--del ; 
			strcpy(user.lap_sold_name[del],"rem") ; //mark completely removed iteams name as rem 
			user.sold_quantity[del] = 0 ;
			user.sold_price[del] = 0 ;
		}				
	}
	
//show bought products after deleting
	int s = 0 ; //for serial
	for (i = 0 ; i < x ; i++){
		if (strcmp(user.lap_sold_name[i],"rem")==0) continue ;
		else{
			printf("\n\n\t\tSelected laptop : %d. %s\n\t\tOrdered quantity : %d pcs\n\t\tTotal price : %ld taka\n",
				   s+1,user.lap_sold_name[i],user.sold_quantity[i],user.sold_price[i]) ;
			s++ ;				
		}
	}
	
	//total price after deletion
	user.total = 0 ;
	for (i = 0 ; i < x ; i++){
		user.total += user.sold_price[i] ;
	}
	printf("\n\n\t\tTotal cost is :%ld taka",user.total) ;		
	}
	
	else{
	//show bought products
	for (i = 0 ; i < x ; i++){
		printf("\n\n\t\tSelected laptop : %d. %s\n\t\tOrdered quantity : %d pcs\n\t\tTotal price : %ld taka\n",
				   i+1,user.lap_sold_name[i],user.sold_quantity[i],user.sold_price[i]) ;
	}
	//count total price
	user.total = 0 ;
	for (i = 0 ; i < x ; i++){
		user.total += user.sold_price[i] ;
	}
	printf("\n\t\tTotal cost is :%ld taka",user.total) ;
	getchar() ;		
	}

}
*/
