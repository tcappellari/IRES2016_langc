#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char* name;
	char* version;
} Software;

void Software_setName(Software* this, char* name)
{
	int length = strlen(name);
	this->name = malloc(length + 1);
	strcpy(this->name, name);
}

void Software_getName(Software* this, char* name)
{
	strcpy(name, this->name);
}

void Software_setVersion(Software* this, char* version)
{
	int length = strlen(version);
	this->version = malloc(length + 1);
	strcpy(this->version, version);
}

void Software_getVersion(Software* this, char* version)
{
	strcpy(version, this->version);
}

int main()
{
	int numel = 100000;
	Software* mySoftware = malloc(numel * sizeof(Software));
	char strAp1[10];
	char strAp2[10];
	for (int i = 0; i < numel; ++i)
	{
		sprintf(strAp1, "%d", i+1);
		strcpy(strAp2, "SW");
		strcat(strAp2, strAp1);
		Software_setName(&mySoftware[i], strAp2);
		Software_setVersion(&mySoftware[i], strAp1);
	}

//	for (int i = 0; i < numel; ++i)
//	{
//		Software_getName(&mySoftware[i], strAp1);
//		Software_getVersion(&mySoftware[i], strAp2);
//		printf("%s  %s\n", strAp1, strAp2);
//	}

	return EXIT_SUCCESS;
}