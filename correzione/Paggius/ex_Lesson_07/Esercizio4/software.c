#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "software.h"

void setName(Software* this, char* name) {
	int dim = strlen (name);
	this->nomesw = malloc(dim+1);
	strcpy(this->nomesw, name);
}

void getName(Software* this, char* name) {
	strcpy(name, this->nomesw);
}

void setVersion(Software* this, int Version) {
	this->version = Version;
}

int getVersion(Software* this) {
	return this->version;
}
