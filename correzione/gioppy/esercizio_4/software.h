#ifndef SOFTWARE_H
#define SOFTWARE_H

typedef struct {
  char* name;
  int* version;
} Software;

void Software_setName(Software* this, char* name);
void Software_setVersion(Software* this, int* version);
void Software_getName(Software* this, char* name);
void Software_getVersion(Software* this, int* version);

#endif