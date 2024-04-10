//#pragma once
#define _FUNC_H_

#ifndef _FRAME_H_
#define _FRAME_H_
#include <frame.h>
#endif

#define MAIN_SRC

#define flushing() { int c; while ((c=getchar()) != '\n' && c != EOF); }

#define SHOW_MENU(M, S) if(!show_menu(M, (E_MAIN_MEMU*)S)) //break;
int show_menu(menus* menu, E_MAIN_MEMU* select)
{
    int i, inp;
    for(;;) {
        printf("\n");
        for (i=0 ; menu[i].num != 0 ; i++) {  // 0 is exit
            printf("%d. %s \n", i+1, menu[i].name);
        }
        printf("0. Main menu\n");
        printf("Select: ");
        scanf("%d", &inp);
        *select = inp;

        if (*select == 0) {
            printf("\n");
            return FAILURE;
        } else if (*select > 0 && *select <= i) {
            *select = menu[*select-1].num;
            return *select;
        }
        printf("Invalid selection!\n");
        flushing();
    }
}

void printCentered(const char *str, int width) {
    int length = strlen(str);
    int spaces = (width - length) / 2;
    printf("%*s%s\n", spaces, "", str); // 왼쪽 공백을 출력하고 문자열을 이어붙임
}

void printInit(void) {
    int i;
    for (i=0; i<30; i++) { printf("-"); } printf("\n");
    //printf("\n%30s\n", "BANKING SYSTEM");
    printCentered("BANKING SYSTEM", 31);
    for (i=0; i<30; i++) { printf("-"); } printf("\n");
}

void plistInit(Person* plist) {
    plist = NULL;

    // add Head
    plist = (Person*) malloc (sizeof(Person)) ;
    plist->name = NULL;
    plist->email = NULL;
    plist->phone = NULL;
}


void addrAdd(int* total) {  


    *total = *total +1 ;
    printf("in func : %ls, %d\n", total, *total);
}
