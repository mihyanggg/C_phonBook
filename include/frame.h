//#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define _FRAME_H_



/* ENUM */

typedef enum E_RET 
{
    SUCCESS = 0,
    FAILURE  ,
    ERROR   ,  
    ETC     
} E_RET;

typedef enum E_MAIN_MEMU
{
    SEARCH  = 1,
    LIST   , 
    ADD    , 
    MODIFY , 
    DELETE , 
    EXIT    
} E_MAIN_MEMU;


/* STRUCT */

typedef struct menus
{
    int num;
    char* name;
} menus;

typedef struct Person
{
    int num;
    char* name;
    char* phone;
    char* email;
} Person;

