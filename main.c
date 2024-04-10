#include <frame.h>
#include <func.h>

#define MAIN_SRC


int main(int argc, char* argv[])
{
    int total = 0;
    E_MAIN_MEMU sel;
    Person* head = NULL;   // head

    printInit();


    menus main_menu[] = {
        SEARCH      ,   "SEARCH"    ,
        LIST        ,   "LIST"      ,
        ADD         ,   "ADD"       ,
        MODIFY      ,   "MODIFY"    ,
        DELETE      ,   "DELETE"    ,
        EXIT        ,   "EXIT"      ,
        0           ,   ""
    }; SHOW_MENU(main_menu, &sel);

    switch (sel)
    {
    case SEARCH :  printf("SEARCH ");  break;
    case LIST   :  printf("LIST   ");  break;
    case ADD    :  
        printf("ADD    ");  

        break;
    case MODIFY :  printf("MODIFY ");  break;
    case DELETE :  printf("DELETE ");  break;
    case EXIT   :  printf("EXIT   ");  break;
    default:
        break;
    }


    return 0;

}

