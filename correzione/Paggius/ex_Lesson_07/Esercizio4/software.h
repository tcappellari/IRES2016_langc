#ifndef es4_h
#define es4_h

typedef struct {
	char* nomesw;
	int version;
} Software;

void setName(Software* this, char* name);
void getName(Software* this, char* name);
void setVersion(Software* this, int Version);
int getVersion(Software* this);

#endif
