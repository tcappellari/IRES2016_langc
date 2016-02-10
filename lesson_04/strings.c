


#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS
#include <string.h> // strlen

int string_length(char* str) {
	int length = 0;
	while(*str != 0) {
		length++;
		str++; // incremento puntatore
	}
	return length;
}

char* concatena(char* s1, char* s2) {

	int length_s3 = strlen(s1) + strlen(s2);
	char s3[length_s3 + 1];

	// i index of s3
	int i = 0;
	// copio s1
	for(int k = 0; k < strlen(s1); ++k) {
		s3[i] = s1[k];
		i++;
	}
	// copio s2
	for(int j = 0; j < strlen(s2); ++j) {
		s3[i] = s2[j];
		i++;
	}
	s3[i] = '\0';

	return s3;
}

void concatenaCorretto(char* s1, char* s2, char* s3) {

	int length_s3 = strlen(s1) + strlen(s2);
	//char s3[length_s3 + 1]; <--- NO SU STACK

	// i index of s3
	int i = 0;
	// copio s1
	for(int k = 0; k < strlen(s1); ++k) {
		s3[i] = s1[k];
		i++;
	}
	// copio s2
	for(int j = 0; j < strlen(s2); ++j) {
		s3[i] = s2[j];
		i++;
	}
	s3[i] = '\0';

}


int main() {

	char c = 'x';
	printf("%c\n", c);

	char str[] = "ciao";
	printf("%s\n", str);		

	for(int i = 0; i < sizeof(str)/sizeof(char); ++i) {
		char strchar = str[i];
		int strint = strchar; 
		printf("str[%d] = %c %d\n", i, strchar, strint);
	}

	char* hello = "Hello";
	int length = string_length(hello);
	printf("length of string %s = %d\n", hello, length);

	printf("length of string %s = %d\n", hello, strlen(hello));



	// sviluppiamo funzione concatenazione.
	// dato una string s1 e una string s2 voglio come risultato una string 
	// s3 che contiene la concanazione dei caratteri di s1 e s2
	// esempio s1 = "Ciao a " e s2 = "Pippo" => s3 = "Ciao a Pippo"

	// errore: array creato nello stack della funzione.
	char s1[] = "Ciao a ";
	char s2[] = "Pippo";
	char* s3 = concatena(s1, s2);

	printf("Errato fortunato: [%s]\n", concatena("Hello ", "world"));
	printf("Errato: [%s] + [%s] = [%s]\n", s1, s2, s3);


	// esempio corretto

	char s3ok[strlen(s1) + strlen(s2) + 1];
	concatenaCorretto(s1, s2, s3ok);

	printf("Corretto: [%s] + [%s] = [%s]\n", s1, s2, s3ok);

	// esempio uso libreria standard di concatenazione

	char dest[strlen(s1) + strlen(s2) + 1];
	strcpy(dest, s1);
	strcat(dest, s2);

	printf("Uso libreria: [%s] + [%s] = [%s]\n", s1, s2, dest);
	

	return EXIT_SUCCESS;
}

