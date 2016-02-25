#include <stdio.h>
#include <stdlib.h>

#include "esercizio_1.h"
#include "esercizio_2.h"
#include "esercizio_3.h"
#include "esercizio_4.h"
#include "esercizio_5.h"
#include "mult.h" //esercizio_6
#include "powr.h" //esercizio_7
#include "esercizio_8.h"
#include "esercizio_9.h"
#include "esercizio_10.h"
#include "esercizio_11.h"

int main()
{
	printf("\nEsercizio 01: ");
	esercizio_1();

	printf("\nEsercizio 02: ");
	esercizio_2();

	printf("\nEsercizio 03: ");
	esercizio_3();

	printf("\nEsercizio 04: ");
	esercizio_4();

	printf("\nEsercizio 05: ");
	esercizio_5();

	printf("\nEsercizio 06: ");
	printf("2 * 3 = %d\n", mult(2, 3));

	printf("\nEsercizio 07: ");
	printf("2 ^ 3 = %d\n", powr(2, 3));

	printf("\nEsercizio 08: ");
	esercizio_8();

	printf("\nEsercizio 09: ");
	esercizio_9();

	printf("\nEsercizio 10: ");
	esercizio_10();

	printf("\nEsercizio 11: ");
	esercizio_11();

	printf("\n");

	return 0;
}