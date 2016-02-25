#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "software.h"

// TC: manca implementazione

void Software_setName(Software* this, char* name){
  int length = strlen(name);
  this->name = malloc(length + 1);
  strcpy(this->name, name);
}

void Software_setVersion(Software* this, int* version){

}

void Software_getName(Software* this, char* name){

}

void Software_getVersion(Software* this, int* version){

}