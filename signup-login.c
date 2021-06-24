#include "common.h"
#include "struct.h"
void signup() ;
void login() ;
void signup_login()
{
    system("color B") ;
    puts("\n\tInput \'Y\' for sign-up(for new user), input \'N\' for login(old user)") ;
    printf("\n\t\t\t\tChoice : ") ;
    user.profile_select=getchar() ;
    switch(user.profile_select)
    {
    case 'n':
    case 'N':
        {
            system("cls") ;
            login() ;
            break ;
        }
    case 'y':
    case 'Y':
        {
            signup() ;
            break ;
        }
    default:
        {
            system("cls") ;
            signup_login() ;
            break ;
        }
    }
}

void signup()
{
    profile=fopen("user.txt","a");
    system("cls");
    system("color 1B");
    puts("\t\t\tN.B: No blank space allowed");
    puts("\t\tN.B: To log-in, Close this application and run it again\n");
    printf("Enter your User-name: ");
    scanf("%s",user.username);
    system("color 1B");
    do
    {
        printf("Enter your password: ");
        scanf("%s",user.pass1);
        printf("Enter confirm password: ");
        scanf("%s",user.pass2);
        if(strcmp(user.pass1,user.pass2)!=0)
        {
            system("color EA ");
            system("color 4B");
            printf("\n\aWrong password! Try again.\n\n");
        }
    }while(strcmp(user.pass1,user.pass2)!=0);
    fprintf(profile,"%s\t%s\n",user.username,user.pass1);
    fclose(profile);
    system("cls");
    puts("\n\tPlease log-in with your user-name and password just you entered");
    login();
}

void login()
{
    user.log_p=0;
    user.log_u=0;
    profile=fopen("user.txt","r");
    system("cls");
    if(profile==NULL)
    {
        puts("\n\t\t\t     Error occurred.\n\n\t\tPlease sign-up or login as Administrator in main menu .\n\n\t\t\tPress any key to login.");
        getch();
        system("cls");
        login();
    }
    system("color 9A");
    printf("\n\t\t\t\t<Login>");
    puts("\n\t\tN.B: To sign-up, input \'0\' as user-name\n");
    do
    {
    printf("\nUser-name: ");
    scanf("%s",user.username_log);
    if(strcmp(user.username_log,"0")==0)
    signup();
    while(!feof(profile))
    {
        fscanf(profile,"%s",user.username);
        if(strcmp(user.username_log,user.username)==0)
        {
            fscanf(profile,"%s",user.pass1);
            strcpy(user.username_log_file,user.username_log);
            user.log_u=1;
        }
    }
    if(user.log_u=0)
    {
        puts("No user-name found. Please sign up or consult with administrator.");
        getch();
        signup_login();
    } 
    //
	
    }while(strcmp(user.username_log_file,user.username_log)!=0);
    rewind(profile);
    system("color 9A");
    do
    {
    printf("\nPassword: ");
    scanf("%s",user.pass3);
    if(strcmp(user.pass3,user.pass1)!=0)
    {
        system("color EA ");
        system("color 4A");
        printf("\n\aWrong password. Try again.\n");
        continue;
    }
    }while(strcmp(user.pass3,user.pass1)!=0);
    fclose(profile);
    system("cls");
}






    /*
    if(strcmp(user.username_log_file,user.username_log)!=0)
    {
        system("color EA ");
        system("color 4A");
        printf("\n\aWrong user-name. Please try again.\n");
        rewind(profile);
        continue;
    } 
	*/ 

