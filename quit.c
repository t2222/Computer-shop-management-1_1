#include "quit.h"
#include "common.h"
#include "struct.h"
void quit()
{
    system("color 4F");
    printf("\n\t\t\tAre you sure to quit?\n\n\t\tPress \'Y\' to quit. \'N\' to back main menu.\n");
    printf("\n\t\t\t\t    ");
    scanf("%c",&user.quit);
    switch(user.quit)
    {
    case 'y':
    case 'Y':
    {
        exit(0);
        break;
    }

    case 'n':
    case 'N':
    {
        main_menu();
        break;
    }
    default:
    {
        system("cls");
        quit();
        break;
    }
    }
}
